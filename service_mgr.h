
#include <map>

#include <google/protobuf/service.h>
#include <google/protobuf/descriptor.h>
#include "common.h"

namespace PBRPC {

using namespace std;

using google::protobuf::MethodDescriptor;
using google::protobuf::Message;
using google::protobuf::Service;

class RpcServiceMgr  {
public:

	struct RpcMethod {
		google::protobuf::Service *_rpc_service;
		const MethodDescriptor *_method_descriptor;
		const Message *_request_proto;
		const Message *_response_proto;

	  RpcMethod(google::protobuf::Service *service,
	            const google::protobuf::Message *request,
	            const google::protobuf::Message *response,
	            const google::protobuf::MethodDescriptor *method)
				: _rpc_service(service),
				_method_descriptor(method),
	      _request_proto(request),
	      _response_proto(response) {
	  }
	};

private:
	typedef map<uint32_t, RpcMethod*> RpcMethodMap;
	RpcMethodMap rpc_method_map_;

protected:
	inline RpcMethod * GetRpcMethod (uint32_t method_nm_code) {
		return rpc_method_map_[method_nm_code];
	}

public:
	RpcServiceMgr() {}
	~RpcServiceMgr();

	void HandleRpcCall(unsigned char *call_data, size_t length, std::string &ret_data, google::protobuf::RpcController *);
	bool RegisterRpcService(google::protobuf::Service *rpc_service);
};
}
