// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user_manager_types.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "user_manager_types.pb.h"

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

namespace bgs {
namespace protocol {
namespace user_manager {
namespace v1 {

namespace {

const ::google::protobuf::Descriptor* RecentPlayer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RecentPlayer_reflection_ = NULL;
const ::google::protobuf::Descriptor* BlockedPlayer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BlockedPlayer_reflection_ = NULL;

}  // namespace

void protobuf_AssignDesc_user_5fmanager_5ftypes_2eproto() {
  protobuf_AddDesc_user_5fmanager_5ftypes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "user_manager_types.proto");
  GOOGLE_CHECK(file != NULL);
  RecentPlayer_descriptor_ = file->message_type(0);
  static const int RecentPlayer_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecentPlayer, entity_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecentPlayer, program_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecentPlayer, timestamp_played_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecentPlayer, attributes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecentPlayer, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecentPlayer, counter_),
  };
  RecentPlayer_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RecentPlayer_descriptor_,
      RecentPlayer::default_instance_,
      RecentPlayer_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecentPlayer, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecentPlayer, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RecentPlayer));
  BlockedPlayer_descriptor_ = file->message_type(1);
  static const int BlockedPlayer_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockedPlayer, account_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockedPlayer, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockedPlayer, role_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockedPlayer, privileges_),
  };
  BlockedPlayer_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BlockedPlayer_descriptor_,
      BlockedPlayer::default_instance_,
      BlockedPlayer_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockedPlayer, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockedPlayer, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BlockedPlayer));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_user_5fmanager_5ftypes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RecentPlayer_descriptor_, &RecentPlayer::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BlockedPlayer_descriptor_, &BlockedPlayer::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_user_5fmanager_5ftypes_2eproto() {
  delete RecentPlayer::default_instance_;
  delete RecentPlayer_reflection_;
  delete BlockedPlayer::default_instance_;
  delete BlockedPlayer_reflection_;
}

void protobuf_AddDesc_user_5fmanager_5ftypes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::bgs::protocol::protobuf_AddDesc_entity_5ftypes_2eproto();
  ::bgs::protocol::protobuf_AddDesc_attribute_5ftypes_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030user_manager_types.proto\022\034bgs.protocol"
    ".user_manager.v1\032\022entity_types.proto\032\025at"
    "tribute_types.proto\"\264\001\n\014RecentPlayer\022)\n\t"
    "entity_id\030\001 \002(\0132\026.bgs.protocol.EntityId\022"
    "\017\n\007program\030\002 \001(\t\022\030\n\020timestamp_played\030\003 \001"
    "(\006\022+\n\nattributes\030\004 \003(\0132\027.bgs.protocol.At"
    "tribute\022\r\n\002id\030\005 \001(\007:\0010\022\022\n\007counter\030\006 \001(\007:"
    "\0010\"r\n\rBlockedPlayer\022*\n\naccount_id\030\001 \002(\0132"
    "\026.bgs.protocol.EntityId\022\014\n\004name\030\002 \001(\t\022\020\n"
    "\004role\030\003 \003(\rB\002\020\001\022\025\n\nprivileges\030\004 \001(\004:\0010B\002"
    "H\001", 402);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "user_manager_types.proto", &protobuf_RegisterTypes);
  RecentPlayer::default_instance_ = new RecentPlayer();
  BlockedPlayer::default_instance_ = new BlockedPlayer();
  RecentPlayer::default_instance_->InitAsDefaultInstance();
  BlockedPlayer::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_user_5fmanager_5ftypes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_user_5fmanager_5ftypes_2eproto {
  StaticDescriptorInitializer_user_5fmanager_5ftypes_2eproto() {
    protobuf_AddDesc_user_5fmanager_5ftypes_2eproto();
  }
} static_descriptor_initializer_user_5fmanager_5ftypes_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RecentPlayer::kEntityIdFieldNumber;
const int RecentPlayer::kProgramFieldNumber;
const int RecentPlayer::kTimestampPlayedFieldNumber;
const int RecentPlayer::kAttributesFieldNumber;
const int RecentPlayer::kIdFieldNumber;
const int RecentPlayer::kCounterFieldNumber;
#endif  // !_MSC_VER

RecentPlayer::RecentPlayer()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.user_manager.v1.RecentPlayer)
}

void RecentPlayer::InitAsDefaultInstance() {
  entity_id_ = const_cast< ::bgs::protocol::EntityId*>(&::bgs::protocol::EntityId::default_instance());
}

RecentPlayer::RecentPlayer(const RecentPlayer& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.user_manager.v1.RecentPlayer)
}

void RecentPlayer::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  entity_id_ = NULL;
  program_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  timestamp_played_ = GOOGLE_ULONGLONG(0);
  id_ = 0u;
  counter_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RecentPlayer::~RecentPlayer() {
  // @@protoc_insertion_point(destructor:bgs.protocol.user_manager.v1.RecentPlayer)
  SharedDtor();
}

void RecentPlayer::SharedDtor() {
  if (program_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete program_;
  }
  if (this != default_instance_) {
    delete entity_id_;
  }
}

void RecentPlayer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RecentPlayer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RecentPlayer_descriptor_;
}

const RecentPlayer& RecentPlayer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_user_5fmanager_5ftypes_2eproto();
  return *default_instance_;
}

RecentPlayer* RecentPlayer::default_instance_ = NULL;

RecentPlayer* RecentPlayer::New() const {
  return new RecentPlayer;
}

void RecentPlayer::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<RecentPlayer*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 55) {
    ZR_(id_, counter_);
    if (has_entity_id()) {
      if (entity_id_ != NULL) entity_id_->::bgs::protocol::EntityId::Clear();
    }
    if (has_program()) {
      if (program_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        program_->clear();
      }
    }
    timestamp_played_ = GOOGLE_ULONGLONG(0);
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  attributes_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RecentPlayer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:bgs.protocol.user_manager.v1.RecentPlayer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .bgs.protocol.EntityId entity_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_entity_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_program;
        break;
      }

      // optional string program = 2;
      case 2: {
        if (tag == 18) {
         parse_program:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_program()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->program().data(), this->program().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "program");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_timestamp_played;
        break;
      }

      // optional fixed64 timestamp_played = 3;
      case 3: {
        if (tag == 25) {
         parse_timestamp_played:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &timestamp_played_)));
          set_has_timestamp_played();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_attributes;
        break;
      }

      // repeated .bgs.protocol.Attribute attributes = 4;
      case 4: {
        if (tag == 34) {
         parse_attributes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_attributes()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_attributes;
        if (input->ExpectTag(45)) goto parse_id;
        break;
      }

      // optional fixed32 id = 5 [default = 0];
      case 5: {
        if (tag == 45) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(53)) goto parse_counter;
        break;
      }

      // optional fixed32 counter = 6 [default = 0];
      case 6: {
        if (tag == 53) {
         parse_counter:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &counter_)));
          set_has_counter();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:bgs.protocol.user_manager.v1.RecentPlayer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:bgs.protocol.user_manager.v1.RecentPlayer)
  return false;
#undef DO_
}

void RecentPlayer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:bgs.protocol.user_manager.v1.RecentPlayer)
  // required .bgs.protocol.EntityId entity_id = 1;
  if (has_entity_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->entity_id(), output);
  }

  // optional string program = 2;
  if (has_program()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->program().data(), this->program().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "program");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->program(), output);
  }

  // optional fixed64 timestamp_played = 3;
  if (has_timestamp_played()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(3, this->timestamp_played(), output);
  }

  // repeated .bgs.protocol.Attribute attributes = 4;
  for (int i = 0; i < this->attributes_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->attributes(i), output);
  }

  // optional fixed32 id = 5 [default = 0];
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(5, this->id(), output);
  }

  // optional fixed32 counter = 6 [default = 0];
  if (has_counter()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(6, this->counter(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:bgs.protocol.user_manager.v1.RecentPlayer)
}

::google::protobuf::uint8* RecentPlayer::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:bgs.protocol.user_manager.v1.RecentPlayer)
  // required .bgs.protocol.EntityId entity_id = 1;
  if (has_entity_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->entity_id(), target);
  }

  // optional string program = 2;
  if (has_program()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->program().data(), this->program().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "program");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->program(), target);
  }

  // optional fixed64 timestamp_played = 3;
  if (has_timestamp_played()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(3, this->timestamp_played(), target);
  }

  // repeated .bgs.protocol.Attribute attributes = 4;
  for (int i = 0; i < this->attributes_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->attributes(i), target);
  }

  // optional fixed32 id = 5 [default = 0];
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(5, this->id(), target);
  }

  // optional fixed32 counter = 6 [default = 0];
  if (has_counter()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(6, this->counter(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bgs.protocol.user_manager.v1.RecentPlayer)
  return target;
}

int RecentPlayer::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .bgs.protocol.EntityId entity_id = 1;
    if (has_entity_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->entity_id());
    }

    // optional string program = 2;
    if (has_program()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->program());
    }

    // optional fixed64 timestamp_played = 3;
    if (has_timestamp_played()) {
      total_size += 1 + 8;
    }

    // optional fixed32 id = 5 [default = 0];
    if (has_id()) {
      total_size += 1 + 4;
    }

    // optional fixed32 counter = 6 [default = 0];
    if (has_counter()) {
      total_size += 1 + 4;
    }

  }
  // repeated .bgs.protocol.Attribute attributes = 4;
  total_size += 1 * this->attributes_size();
  for (int i = 0; i < this->attributes_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->attributes(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RecentPlayer::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RecentPlayer* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RecentPlayer*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RecentPlayer::MergeFrom(const RecentPlayer& from) {
  GOOGLE_CHECK_NE(&from, this);
  attributes_.MergeFrom(from.attributes_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_entity_id()) {
      mutable_entity_id()->::bgs::protocol::EntityId::MergeFrom(from.entity_id());
    }
    if (from.has_program()) {
      set_program(from.program());
    }
    if (from.has_timestamp_played()) {
      set_timestamp_played(from.timestamp_played());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_counter()) {
      set_counter(from.counter());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RecentPlayer::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RecentPlayer::CopyFrom(const RecentPlayer& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RecentPlayer::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_entity_id()) {
    if (!this->entity_id().IsInitialized()) return false;
  }
  if (!::google::protobuf::internal::AllAreInitialized(this->attributes())) return false;
  return true;
}

void RecentPlayer::Swap(RecentPlayer* other) {
  if (other != this) {
    std::swap(entity_id_, other->entity_id_);
    std::swap(program_, other->program_);
    std::swap(timestamp_played_, other->timestamp_played_);
    attributes_.Swap(&other->attributes_);
    std::swap(id_, other->id_);
    std::swap(counter_, other->counter_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RecentPlayer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RecentPlayer_descriptor_;
  metadata.reflection = RecentPlayer_reflection_;
  return metadata;
}

// ===================================================================

#ifndef _MSC_VER
const int BlockedPlayer::kAccountIdFieldNumber;
const int BlockedPlayer::kNameFieldNumber;
const int BlockedPlayer::kRoleFieldNumber;
const int BlockedPlayer::kPrivilegesFieldNumber;
#endif  // !_MSC_VER

BlockedPlayer::BlockedPlayer()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.user_manager.v1.BlockedPlayer)
}

void BlockedPlayer::InitAsDefaultInstance() {
  account_id_ = const_cast< ::bgs::protocol::EntityId*>(&::bgs::protocol::EntityId::default_instance());
}

BlockedPlayer::BlockedPlayer(const BlockedPlayer& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.user_manager.v1.BlockedPlayer)
}

void BlockedPlayer::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  account_id_ = NULL;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _role_cached_byte_size_ = 0;
  privileges_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BlockedPlayer::~BlockedPlayer() {
  // @@protoc_insertion_point(destructor:bgs.protocol.user_manager.v1.BlockedPlayer)
  SharedDtor();
}

void BlockedPlayer::SharedDtor() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (this != default_instance_) {
    delete account_id_;
  }
}

void BlockedPlayer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BlockedPlayer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BlockedPlayer_descriptor_;
}

const BlockedPlayer& BlockedPlayer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_user_5fmanager_5ftypes_2eproto();
  return *default_instance_;
}

BlockedPlayer* BlockedPlayer::default_instance_ = NULL;

BlockedPlayer* BlockedPlayer::New() const {
  return new BlockedPlayer;
}

void BlockedPlayer::Clear() {
  if (_has_bits_[0 / 32] & 11) {
    if (has_account_id()) {
      if (account_id_ != NULL) account_id_->::bgs::protocol::EntityId::Clear();
    }
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        name_->clear();
      }
    }
    privileges_ = GOOGLE_ULONGLONG(0);
  }
  role_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BlockedPlayer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:bgs.protocol.user_manager.v1.BlockedPlayer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .bgs.protocol.EntityId account_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_account_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // optional string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_role;
        break;
      }

      // repeated uint32 role = 3 [packed = true];
      case 3: {
        if (tag == 26) {
         parse_role:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_role())));
        } else if (tag == 24) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 26, input, this->mutable_role())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_privileges;
        break;
      }

      // optional uint64 privileges = 4 [default = 0];
      case 4: {
        if (tag == 32) {
         parse_privileges:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &privileges_)));
          set_has_privileges();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:bgs.protocol.user_manager.v1.BlockedPlayer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:bgs.protocol.user_manager.v1.BlockedPlayer)
  return false;
#undef DO_
}

void BlockedPlayer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:bgs.protocol.user_manager.v1.BlockedPlayer)
  // required .bgs.protocol.EntityId account_id = 1;
  if (has_account_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->account_id(), output);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // repeated uint32 role = 3 [packed = true];
  if (this->role_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_role_cached_byte_size_);
  }
  for (int i = 0; i < this->role_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->role(i), output);
  }

  // optional uint64 privileges = 4 [default = 0];
  if (has_privileges()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->privileges(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:bgs.protocol.user_manager.v1.BlockedPlayer)
}

::google::protobuf::uint8* BlockedPlayer::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:bgs.protocol.user_manager.v1.BlockedPlayer)
  // required .bgs.protocol.EntityId account_id = 1;
  if (has_account_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->account_id(), target);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // repeated uint32 role = 3 [packed = true];
  if (this->role_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _role_cached_byte_size_, target);
  }
  for (int i = 0; i < this->role_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->role(i), target);
  }

  // optional uint64 privileges = 4 [default = 0];
  if (has_privileges()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->privileges(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bgs.protocol.user_manager.v1.BlockedPlayer)
  return target;
}

int BlockedPlayer::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .bgs.protocol.EntityId account_id = 1;
    if (has_account_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->account_id());
    }

    // optional string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional uint64 privileges = 4 [default = 0];
    if (has_privileges()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->privileges());
    }

  }
  // repeated uint32 role = 3 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->role_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->role(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _role_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BlockedPlayer::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BlockedPlayer* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BlockedPlayer*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BlockedPlayer::MergeFrom(const BlockedPlayer& from) {
  GOOGLE_CHECK_NE(&from, this);
  role_.MergeFrom(from.role_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_account_id()) {
      mutable_account_id()->::bgs::protocol::EntityId::MergeFrom(from.account_id());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_privileges()) {
      set_privileges(from.privileges());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BlockedPlayer::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BlockedPlayer::CopyFrom(const BlockedPlayer& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BlockedPlayer::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_account_id()) {
    if (!this->account_id().IsInitialized()) return false;
  }
  return true;
}

void BlockedPlayer::Swap(BlockedPlayer* other) {
  if (other != this) {
    std::swap(account_id_, other->account_id_);
    std::swap(name_, other->name_);
    role_.Swap(&other->role_);
    std::swap(privileges_, other->privileges_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BlockedPlayer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BlockedPlayer_descriptor_;
  metadata.reflection = BlockedPlayer_reflection_;
  return metadata;
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace user_manager
}  // namespace protocol
}  // namespace bgs

// @@protoc_insertion_point(global_scope)
