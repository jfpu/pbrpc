COMMON = common.h rpc_controller.h svc_name2id.h
RPCSVRLIB=librpcsvr.a
RPCCLTLIB=librpcclt.a
PBDIR=/data/jfpu/lib/protobuf-2.4.1/src

INCLUDES=-I/usr/local/include
CCFLAGS=-g
%.o:%.cc
	c++ $(CCFLAGS) $(INCLUDES) -o $@ -c $<

all: PROTO $(RPCSVRLIB) $(RPCCLTLIB)

PROTO: rpc.proto
	protoc --proto_path=/usr/local/include/:. --cpp_out=. rpc.proto
# protoc --proto_path=$(PBDIR):. --cpp_out=. rpc.proto
	# protoc --proto_path=/data/jfpu/lib/protobuf-2.4.1/src:. --cpp_out=. rpc.proto
	# protoc --cpp_out=. rpc.proto

$(RPCSVRLIB): rpc_server.o service_mgr.o common.o rpc.pb.o lookup3.o
	ar cru $(RPCSVRLIB) rpc_server.o service_mgr.o common.o rpc.pb.o lookup3.o

$(RPCCLTLIB): rpc_client.o rpc_channel.o common.o lookup3.o
	ar cru $(RPCCLTLIB) rpc_client.o rpc_channel.o common.o rpc.pb.o lookup3.o

clean:
	-rm *.o $(RPCCLTLIB) $(RPCSVRLIB)
