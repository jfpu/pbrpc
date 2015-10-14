#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <iostream>

#include "service_mgr.h"
#include "svc_name2id.h"

#include "rpc.pb.h"

using namespace std;
using namespace ::google::protobuf;
using namespace PBRPC;
using namespace RPC;

RpcServiceMgr::~RpcServiceMgr() {
  RpcMethodMap::iterator iter = rpc_method_map_.begin();
  for (; iter != rpc_method_map_.end(); ) {
    RpcMethod *rpc_method = iter->second;
    ++iter;
    delete rpc_method;
  }
}

bool RpcServiceMgr::RegisterRpcService(google::protobuf::Service *rpc_service) {
  const google::protobuf::ServiceDescriptor
      *descriptor = rpc_service->GetDescriptor();
  for (int i = 0; i < descriptor->method_count(); ++i) {
    const google::protobuf::MethodDescriptor *method = descriptor->method(i);
    const google::protobuf::Message *request =
      &rpc_service->GetRequestPrototype(method);
    const google::protobuf::Message *response =
      &rpc_service->GetResponsePrototype(method);
    RpcMethod *rpc_method = new RpcMethod(rpc_service, request, response, method);

    uint32_t serviceId = (uint32_t)(descriptor->options().GetExtension(global_service_id));
    uint32_t methodId = (uint32_t)(method->options().GetExtension(local_method_id));
    uint32_t method_nm_code = encode_pcode(serviceId, methodId);

    std::cout << "register service: " << method->full_name()
        << ", method_nm_code: " << method_nm_code;
    if (rpc_method_map_.end() == rpc_method_map_.find(method_nm_code)) {
      std::cout << "rpc method " << method->full_name() << " duplicated";
    }
    rpc_method_map_[method_nm_code] = rpc_method;
  }

	return true;
}

void RpcServiceMgr::HandleRpcCall(unsigned char *call_data, size_t length, std::string &ret_data, google::protobuf::RpcController *controller) {
	RPC::RpcRequestData rpc_data;
	rpc_data.ParseFromArray(call_data, length);
	controller->Reset();

  Message *request = NULL;
  Message *response = NULL;
  do {
    uint32_t method_nm_code = rpc_data.srv_method_code();
  	RpcServiceMgr::RpcMethod *rpc_method = GetRpcMethod(method_nm_code);
    if (NULL == rpc_method) {
      std::cout << "not registe RpcMethod: method_nm_code: " << hex << method_nm_code << std::endl;
      break;
    }
  	Service *rpc_service = rpc_method->_rpc_service;
    const MethodDescriptor *the_method = rpc_method->_method_descriptor;
  	request = rpc_method->_request_proto->New();
  	response = rpc_method->_response_proto->New();

  	request->ParseFromString(rpc_data.content());

  	rpc_service->CallMethod(the_method, controller, request, response, NULL);
  } while (false);

	RPC::RpcResponseData response_data;
	std::string content;
	response_data.set_call_id(rpc_data.call_id());
	response->SerializeToString(&content);
	response_data.set_content(content); 
	response_data.SerializeToString(&ret_data);

	delete request;
	delete response;
}
