// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: global_extensions/method_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "global_extensions/method_options.pb.h"

#include <algorithm>
#include <utility>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#include "Log.h"
// @@protoc_insertion_point(includes)

// Fix stupid windows.h included from Log.h->Common.h
#ifdef SendMessage
#undef SendMessage
#endif

namespace bgs {
namespace protocol {

namespace {

}  // namespace

void protobuf_AssignDesc_global_5fextensions_2fmethod_5foptions_2eproto() {
  protobuf_AddDesc_global_5fextensions_2fmethod_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "global_extensions/method_options.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_global_5fextensions_2fmethod_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_global_5fextensions_2fmethod_5foptions_2eproto() {
}

void protobuf_AddDesc_global_5fextensions_2fmethod_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&global_extensions/method_options.proto"
    "\022\014bgs.protocol\032 google/protobuf/descript"
    "or.proto:3\n\tmethod_id\022\036.google.protobuf."
    "MethodOptions\030\320\206\003 \001(\rB%\n\rbnet.protocolB\022"
    "MethodOptionsProtoH\001", 180);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "global_extensions/method_options.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MethodOptions::default_instance(),
    50000, 13, false, false);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_global_5fextensions_2fmethod_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_global_5fextensions_2fmethod_5foptions_2eproto {
  StaticDescriptorInitializer_global_5fextensions_2fmethod_5foptions_2eproto() {
    protobuf_AddDesc_global_5fextensions_2fmethod_5foptions_2eproto();
  }
} static_descriptor_initializer_global_5fextensions_2fmethod_5foptions_2eproto_;
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::uint32 >, 13, false >
  method_id(kMethodIdFieldNumber, 0u);

// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol
}  // namespace bgs

// @@protoc_insertion_point(global_scope)
