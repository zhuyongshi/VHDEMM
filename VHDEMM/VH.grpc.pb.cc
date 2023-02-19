// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: VH.proto

#include "VH.pb.h"
#include "VH.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace VH {

static const char* RPC_method_names[] = {
  "/VH.RPC/search",
  "/VH.RPC/update",
  "/VH.RPC/batchupdate",
  "/VH.RPC/updateDX",
};

std::unique_ptr< RPC::Stub> RPC::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RPC::Stub> stub(new RPC::Stub(channel, options));
  return stub;
}

RPC::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_search_(RPC_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_update_(RPC_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_batchupdate_(RPC_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_updateDX_(RPC_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::VH::SearchReply>* RPC::Stub::searchRaw(::grpc::ClientContext* context, const ::VH::SearchRequestMessage& request) {
  return ::grpc::internal::ClientReaderFactory< ::VH::SearchReply>::Create(channel_.get(), rpcmethod_search_, context, request);
}

void RPC::Stub::async::search(::grpc::ClientContext* context, const ::VH::SearchRequestMessage* request, ::grpc::ClientReadReactor< ::VH::SearchReply>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::VH::SearchReply>::Create(stub_->channel_.get(), stub_->rpcmethod_search_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::VH::SearchReply>* RPC::Stub::AsyncsearchRaw(::grpc::ClientContext* context, const ::VH::SearchRequestMessage& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::VH::SearchReply>::Create(channel_.get(), cq, rpcmethod_search_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::VH::SearchReply>* RPC::Stub::PrepareAsyncsearchRaw(::grpc::ClientContext* context, const ::VH::SearchRequestMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::VH::SearchReply>::Create(channel_.get(), cq, rpcmethod_search_, context, request, false, nullptr);
}

::grpc::Status RPC::Stub::update(::grpc::ClientContext* context, const ::VH::UpdateRequestMessage& request, ::VH::ExecuteStatus* response) {
  return ::grpc::internal::BlockingUnaryCall< ::VH::UpdateRequestMessage, ::VH::ExecuteStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_update_, context, request, response);
}

void RPC::Stub::async::update(::grpc::ClientContext* context, const ::VH::UpdateRequestMessage* request, ::VH::ExecuteStatus* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::VH::UpdateRequestMessage, ::VH::ExecuteStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_update_, context, request, response, std::move(f));
}

void RPC::Stub::async::update(::grpc::ClientContext* context, const ::VH::UpdateRequestMessage* request, ::VH::ExecuteStatus* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_update_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::VH::ExecuteStatus>* RPC::Stub::PrepareAsyncupdateRaw(::grpc::ClientContext* context, const ::VH::UpdateRequestMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::VH::ExecuteStatus, ::VH::UpdateRequestMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_update_, context, request);
}

::grpc::ClientAsyncResponseReader< ::VH::ExecuteStatus>* RPC::Stub::AsyncupdateRaw(::grpc::ClientContext* context, const ::VH::UpdateRequestMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncupdateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientWriter< ::VH::UpdateRequestMessage>* RPC::Stub::batchupdateRaw(::grpc::ClientContext* context, ::VH::ExecuteStatus* response) {
  return ::grpc::internal::ClientWriterFactory< ::VH::UpdateRequestMessage>::Create(channel_.get(), rpcmethod_batchupdate_, context, response);
}

void RPC::Stub::async::batchupdate(::grpc::ClientContext* context, ::VH::ExecuteStatus* response, ::grpc::ClientWriteReactor< ::VH::UpdateRequestMessage>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::VH::UpdateRequestMessage>::Create(stub_->channel_.get(), stub_->rpcmethod_batchupdate_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::VH::UpdateRequestMessage>* RPC::Stub::AsyncbatchupdateRaw(::grpc::ClientContext* context, ::VH::ExecuteStatus* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::VH::UpdateRequestMessage>::Create(channel_.get(), cq, rpcmethod_batchupdate_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::VH::UpdateRequestMessage>* RPC::Stub::PrepareAsyncbatchupdateRaw(::grpc::ClientContext* context, ::VH::ExecuteStatus* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::VH::UpdateRequestMessage>::Create(channel_.get(), cq, rpcmethod_batchupdate_, context, response, false, nullptr);
}

::grpc::Status RPC::Stub::updateDX(::grpc::ClientContext* context, const ::VH::UpdateDXMessage& request, ::VH::ExecuteStatus* response) {
  return ::grpc::internal::BlockingUnaryCall< ::VH::UpdateDXMessage, ::VH::ExecuteStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_updateDX_, context, request, response);
}

void RPC::Stub::async::updateDX(::grpc::ClientContext* context, const ::VH::UpdateDXMessage* request, ::VH::ExecuteStatus* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::VH::UpdateDXMessage, ::VH::ExecuteStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_updateDX_, context, request, response, std::move(f));
}

void RPC::Stub::async::updateDX(::grpc::ClientContext* context, const ::VH::UpdateDXMessage* request, ::VH::ExecuteStatus* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_updateDX_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::VH::ExecuteStatus>* RPC::Stub::PrepareAsyncupdateDXRaw(::grpc::ClientContext* context, const ::VH::UpdateDXMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::VH::ExecuteStatus, ::VH::UpdateDXMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_updateDX_, context, request);
}

::grpc::ClientAsyncResponseReader< ::VH::ExecuteStatus>* RPC::Stub::AsyncupdateDXRaw(::grpc::ClientContext* context, const ::VH::UpdateDXMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncupdateDXRaw(context, request, cq);
  result->StartCall();
  return result;
}

RPC::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RPC_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< RPC::Service, ::VH::SearchRequestMessage, ::VH::SearchReply>(
          [](RPC::Service* service,
             ::grpc::ServerContext* ctx,
             const ::VH::SearchRequestMessage* req,
             ::grpc::ServerWriter<::VH::SearchReply>* writer) {
               return service->search(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RPC_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RPC::Service, ::VH::UpdateRequestMessage, ::VH::ExecuteStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RPC::Service* service,
             ::grpc::ServerContext* ctx,
             const ::VH::UpdateRequestMessage* req,
             ::VH::ExecuteStatus* resp) {
               return service->update(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RPC_method_names[2],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< RPC::Service, ::VH::UpdateRequestMessage, ::VH::ExecuteStatus>(
          [](RPC::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::VH::UpdateRequestMessage>* reader,
             ::VH::ExecuteStatus* resp) {
               return service->batchupdate(ctx, reader, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RPC_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RPC::Service, ::VH::UpdateDXMessage, ::VH::ExecuteStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RPC::Service* service,
             ::grpc::ServerContext* ctx,
             const ::VH::UpdateDXMessage* req,
             ::VH::ExecuteStatus* resp) {
               return service->updateDX(ctx, req, resp);
             }, this)));
}

RPC::Service::~Service() {
}

::grpc::Status RPC::Service::search(::grpc::ServerContext* context, const ::VH::SearchRequestMessage* request, ::grpc::ServerWriter< ::VH::SearchReply>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RPC::Service::update(::grpc::ServerContext* context, const ::VH::UpdateRequestMessage* request, ::VH::ExecuteStatus* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RPC::Service::batchupdate(::grpc::ServerContext* context, ::grpc::ServerReader< ::VH::UpdateRequestMessage>* reader, ::VH::ExecuteStatus* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RPC::Service::updateDX(::grpc::ServerContext* context, const ::VH::UpdateDXMessage* request, ::VH::ExecuteStatus* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace VH

