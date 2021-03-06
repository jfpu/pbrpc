#include <string>
#include <sstream>
#include <iostream>

// for inet_aton
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
//
//
#include "rpc_channel.h"
#include "svc_name2id.h"

#include <google/protobuf/message.h>

#include "rpc.pb.h"

using namespace PBRPC;
using namespace RPC;
using google::protobuf::MethodDescriptor;

void RpcChannel::CallMethod(const MethodDescriptor *method,	::google::protobuf::RpcController *controller, const Message *request, Message *response, Closure *done) {
	if (!_session_id) {
		Connect(controller);
		if (controller->Failed()) return;
	}

	const google::protobuf::ServiceDescriptor *service = method->service();
	uint32_t serviceId = (uint32_t)(service->options().GetExtension(global_service_id));
	const uint32_t methodId = (uint32_t)(method->options().GetExtension(local_method_id));
	const uint32_t method_nm_code = encode_pcode(serviceId, methodId);

	std::string * content =  new std::string;
	request->SerializeToString(content);

	_client->CallMsgEnqueue(_session_id, content, 0, method_nm_code,
		controller, response, done, _write_pipe);
	
	if (!done) {
		char buf;
		read(_read_pipe, &buf, sizeof(buf));
	}
}

RpcChannel::RpcChannel(RpcClient *client, const char *connect_str):_client(client), 
	_conn_str(connect_str), _session_id(0) {	
	int pipefd[2];
	pipe(pipefd);
	_write_pipe = pipefd[1];
	_read_pipe = pipefd[0];
}

void RpcChannel::Connect(google::protobuf::RpcController *controller) {
	size_t split_pos = _conn_str.find(':');
	if (split_pos == std::string::npos)	{ 
		controller->SetFailed("Error connect string : ");
		return;
	}
	std::string ip_str = _conn_str.substr(0, split_pos);
	std::string port_str = _conn_str.substr(split_pos + 1);

	struct in_addr ip;
	if (inet_aton(ip_str.c_str(), &ip) == 0) {
		controller->SetFailed("Invalid connect Ip");
		return;
	}
	unsigned short port;
	std::stringstream ss(port_str);
	ss >> port;

	_client->Start(controller);
	if (controller->Failed()) return;

	_session_id = _client->AllocSession();
	_client->ConnectMsgEnqueue(_session_id, controller, ip, htons(port));
}

RpcChannel::~RpcChannel() {
	close(_write_pipe);
	close(_read_pipe);
	_client->FreeSession(_session_id); //TODO: Not Destory util all calls return
}
