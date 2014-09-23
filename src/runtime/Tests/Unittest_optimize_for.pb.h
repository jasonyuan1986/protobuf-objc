// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

#import "Unittest.pb.h"
// @@protoc_insertion_point(imports)

@class BarRequest;
@class BarRequestBuilder;
@class BarResponse;
@class BarResponseBuilder;
@class BoolMessage;
@class BoolMessageBuilder;
@class FooClientMessage;
@class FooClientMessageBuilder;
@class FooRequest;
@class FooRequestBuilder;
@class FooResponse;
@class FooResponseBuilder;
@class FooServerMessage;
@class FooServerMessageBuilder;
@class ForeignMessage;
@class ForeignMessageBuilder;
@class ImportMessage;
@class ImportMessageBuilder;
@class Int32Message;
@class Int32MessageBuilder;
@class Int64Message;
@class Int64MessageBuilder;
@class MoreBytes;
@class MoreBytesBuilder;
@class MoreString;
@class MoreStringBuilder;
@class NestedTestAllTypes;
@class NestedTestAllTypesBuilder;
@class OneBytes;
@class OneBytesBuilder;
@class OneString;
@class OneStringBuilder;
@class OptionalGroup_extension;
@class OptionalGroup_extensionBuilder;
@class PublicImportMessage;
@class PublicImportMessageBuilder;
@class RepeatedGroup_extension;
@class RepeatedGroup_extensionBuilder;
@class SparseEnumMessage;
@class SparseEnumMessageBuilder;
@class TestAllExtensions;
@class TestAllExtensionsBuilder;
@class TestAllTypes;
@class TestAllTypesBuilder;
@class TestAllTypesNestedMessage;
@class TestAllTypesNestedMessageBuilder;
@class TestAllTypesOptionalGroup;
@class TestAllTypesOptionalGroupBuilder;
@class TestAllTypesRepeatedGroup;
@class TestAllTypesRepeatedGroupBuilder;
@class TestCamelCaseFieldNames;
@class TestCamelCaseFieldNamesBuilder;
@class TestCommentInjectionMessage;
@class TestCommentInjectionMessageBuilder;
@class TestDeprecatedFields;
@class TestDeprecatedFieldsBuilder;
@class TestDupFieldNumber;
@class TestDupFieldNumberBar;
@class TestDupFieldNumberBarBuilder;
@class TestDupFieldNumberBuilder;
@class TestDupFieldNumberFoo;
@class TestDupFieldNumberFooBuilder;
@class TestDynamicExtensions;
@class TestDynamicExtensionsBuilder;
@class TestDynamicExtensionsDynamicMessageType;
@class TestDynamicExtensionsDynamicMessageTypeBuilder;
@class TestEagerMessage;
@class TestEagerMessageBuilder;
@class TestEmptyMessage;
@class TestEmptyMessageBuilder;
@class TestEmptyMessageWithExtensions;
@class TestEmptyMessageWithExtensionsBuilder;
@class TestExtremeDefaultValues;
@class TestExtremeDefaultValuesBuilder;
@class TestFieldOrderings;
@class TestFieldOrderingsBuilder;
@class TestForeignNested;
@class TestForeignNestedBuilder;
@class TestLazyMessage;
@class TestLazyMessageBuilder;
@class TestMultipleExtensionRanges;
@class TestMultipleExtensionRangesBuilder;
@class TestMutualRecursionA;
@class TestMutualRecursionABuilder;
@class TestMutualRecursionB;
@class TestMutualRecursionBBuilder;
@class TestNestedExtension;
@class TestNestedExtensionBuilder;
@class TestNestedMessageHasBits;
@class TestNestedMessageHasBitsBuilder;
@class TestNestedMessageHasBitsNestedMessage;
@class TestNestedMessageHasBitsNestedMessageBuilder;
@class TestOneof;
@class TestOneof2;
@class TestOneof2Builder;
@class TestOneof2FooGroup;
@class TestOneof2FooGroupBuilder;
@class TestOneof2NestedMessage;
@class TestOneof2NestedMessageBuilder;
@class TestOneofBackwardsCompatible;
@class TestOneofBackwardsCompatibleBuilder;
@class TestOneofBackwardsCompatibleFooGroup;
@class TestOneofBackwardsCompatibleFooGroupBuilder;
@class TestOneofBuilder;
@class TestOneofFooGroup;
@class TestOneofFooGroupBuilder;
@class TestOptimizedForSize;
@class TestOptimizedForSizeBuilder;
@class TestOptionalOptimizedForSize;
@class TestOptionalOptimizedForSizeBuilder;
@class TestPackedExtensions;
@class TestPackedExtensionsBuilder;
@class TestPackedTypes;
@class TestPackedTypesBuilder;
@class TestParsingMerge;
@class TestParsingMergeBuilder;
@class TestParsingMergeOptionalGroup;
@class TestParsingMergeOptionalGroupBuilder;
@class TestParsingMergeRepeatedFieldsGenerator;
@class TestParsingMergeRepeatedFieldsGeneratorBuilder;
@class TestParsingMergeRepeatedFieldsGeneratorGroup1;
@class TestParsingMergeRepeatedFieldsGeneratorGroup1Builder;
@class TestParsingMergeRepeatedFieldsGeneratorGroup2;
@class TestParsingMergeRepeatedFieldsGeneratorGroup2Builder;
@class TestParsingMergeRepeatedGroup;
@class TestParsingMergeRepeatedGroupBuilder;
@class TestReallyLargeTagNumber;
@class TestReallyLargeTagNumberBuilder;
@class TestRecursiveMessage;
@class TestRecursiveMessageBuilder;
@class TestRepeatedScalarDifferentTagSizes;
@class TestRepeatedScalarDifferentTagSizesBuilder;
@class TestRequired;
@class TestRequiredBuilder;
@class TestRequiredForeign;
@class TestRequiredForeignBuilder;
@class TestRequiredOneof;
@class TestRequiredOneofBuilder;
@class TestRequiredOneofNestedMessage;
@class TestRequiredOneofNestedMessageBuilder;
@class TestRequiredOptimizedForSize;
@class TestRequiredOptimizedForSizeBuilder;
@class TestUnpackedExtensions;
@class TestUnpackedExtensionsBuilder;
@class TestUnpackedTypes;
@class TestUnpackedTypesBuilder;
@class Uint32Message;
@class Uint32MessageBuilder;
@class Uint64Message;
@class Uint64MessageBuilder;
#ifndef __has_feature
  #define __has_feature(x) 0 // Compatibility with non-clang compilers.
#endif // __has_feature

#ifndef NS_RETURNS_NOT_RETAINED
  #if __has_feature(attribute_ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
  #else
    #define NS_RETURNS_NOT_RETAINED
  #endif
#endif


@interface UnittestOptimizeForRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface TestOptimizedForSize : PBExtendableMessage {
@private
  BOOL hasI_:1;
  BOOL hasIntegerField_:1;
  BOOL hasStringField_:1;
  BOOL hasMsg_:1;
  SInt32 i;
  SInt32 integerField;
  NSString* stringField;
  ForeignMessage* msg;
}
- (BOOL) hasI;
- (BOOL) hasMsg;
- (BOOL) hasIntegerField;
- (BOOL) hasStringField;
@property (readonly) SInt32 i;
@property (readonly, strong) ForeignMessage* msg;
@property (readonly) SInt32 integerField;
@property (readonly, strong) NSString* stringField;

+ (TestOptimizedForSize*) defaultInstance;
- (TestOptimizedForSize*) defaultInstance;

+ (id<PBExtensionField>) testExtension;
+ (id<PBExtensionField>) testExtension2;
- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TestOptimizedForSizeBuilder*) builder;
+ (TestOptimizedForSizeBuilder*) builder;
+ (TestOptimizedForSizeBuilder*) builderWithPrototype:(TestOptimizedForSize*) prototype;
- (TestOptimizedForSizeBuilder*) toBuilder;

+ (TestOptimizedForSize*) parseFromData:(NSData*) data;
+ (TestOptimizedForSize*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestOptimizedForSize*) parseFromInputStream:(NSInputStream*) input;
+ (TestOptimizedForSize*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestOptimizedForSize*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (TestOptimizedForSize*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TestOptimizedForSizeBuilder : PBExtendableMessageBuilder {
@private
  TestOptimizedForSize* result;
}

- (TestOptimizedForSize*) defaultInstance;

- (TestOptimizedForSizeBuilder*) clear;
- (TestOptimizedForSizeBuilder*) clone;

- (TestOptimizedForSize*) build;
- (TestOptimizedForSize*) buildPartial;

- (TestOptimizedForSizeBuilder*) mergeFrom:(TestOptimizedForSize*) other;
- (TestOptimizedForSizeBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TestOptimizedForSizeBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasI;
- (SInt32) i;
- (TestOptimizedForSizeBuilder*) setI:(SInt32) value;
- (TestOptimizedForSizeBuilder*) clearI;

- (BOOL) hasMsg;
- (ForeignMessage*) msg;
- (TestOptimizedForSizeBuilder*) setMsg:(ForeignMessage*) value;
- (TestOptimizedForSizeBuilder*) setMsgBuilder:(ForeignMessageBuilder*) builderForValue;
- (TestOptimizedForSizeBuilder*) mergeMsg:(ForeignMessage*) value;
- (TestOptimizedForSizeBuilder*) clearMsg;

- (BOOL) hasIntegerField;
- (SInt32) integerField;
- (TestOptimizedForSizeBuilder*) setIntegerField:(SInt32) value;
- (TestOptimizedForSizeBuilder*) clearIntegerField;

- (BOOL) hasStringField;
- (NSString*) stringField;
- (TestOptimizedForSizeBuilder*) setStringField:(NSString*) value;
- (TestOptimizedForSizeBuilder*) clearStringField;
@end

@interface TestRequiredOptimizedForSize : PBGeneratedMessage {
@private
  BOOL hasX_:1;
  SInt32 x;
}
- (BOOL) hasX;
@property (readonly) SInt32 x;

+ (TestRequiredOptimizedForSize*) defaultInstance;
- (TestRequiredOptimizedForSize*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TestRequiredOptimizedForSizeBuilder*) builder;
+ (TestRequiredOptimizedForSizeBuilder*) builder;
+ (TestRequiredOptimizedForSizeBuilder*) builderWithPrototype:(TestRequiredOptimizedForSize*) prototype;
- (TestRequiredOptimizedForSizeBuilder*) toBuilder;

+ (TestRequiredOptimizedForSize*) parseFromData:(NSData*) data;
+ (TestRequiredOptimizedForSize*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestRequiredOptimizedForSize*) parseFromInputStream:(NSInputStream*) input;
+ (TestRequiredOptimizedForSize*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestRequiredOptimizedForSize*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (TestRequiredOptimizedForSize*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TestRequiredOptimizedForSizeBuilder : PBGeneratedMessageBuilder {
@private
  TestRequiredOptimizedForSize* result;
}

- (TestRequiredOptimizedForSize*) defaultInstance;

- (TestRequiredOptimizedForSizeBuilder*) clear;
- (TestRequiredOptimizedForSizeBuilder*) clone;

- (TestRequiredOptimizedForSize*) build;
- (TestRequiredOptimizedForSize*) buildPartial;

- (TestRequiredOptimizedForSizeBuilder*) mergeFrom:(TestRequiredOptimizedForSize*) other;
- (TestRequiredOptimizedForSizeBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TestRequiredOptimizedForSizeBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasX;
- (SInt32) x;
- (TestRequiredOptimizedForSizeBuilder*) setX:(SInt32) value;
- (TestRequiredOptimizedForSizeBuilder*) clearX;
@end

@interface TestOptionalOptimizedForSize : PBGeneratedMessage {
@private
  BOOL hasO_:1;
  TestRequiredOptimizedForSize* o;
}
- (BOOL) hasO;
@property (readonly, strong) TestRequiredOptimizedForSize* o;

+ (TestOptionalOptimizedForSize*) defaultInstance;
- (TestOptionalOptimizedForSize*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TestOptionalOptimizedForSizeBuilder*) builder;
+ (TestOptionalOptimizedForSizeBuilder*) builder;
+ (TestOptionalOptimizedForSizeBuilder*) builderWithPrototype:(TestOptionalOptimizedForSize*) prototype;
- (TestOptionalOptimizedForSizeBuilder*) toBuilder;

+ (TestOptionalOptimizedForSize*) parseFromData:(NSData*) data;
+ (TestOptionalOptimizedForSize*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestOptionalOptimizedForSize*) parseFromInputStream:(NSInputStream*) input;
+ (TestOptionalOptimizedForSize*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestOptionalOptimizedForSize*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (TestOptionalOptimizedForSize*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TestOptionalOptimizedForSizeBuilder : PBGeneratedMessageBuilder {
@private
  TestOptionalOptimizedForSize* result;
}

- (TestOptionalOptimizedForSize*) defaultInstance;

- (TestOptionalOptimizedForSizeBuilder*) clear;
- (TestOptionalOptimizedForSizeBuilder*) clone;

- (TestOptionalOptimizedForSize*) build;
- (TestOptionalOptimizedForSize*) buildPartial;

- (TestOptionalOptimizedForSizeBuilder*) mergeFrom:(TestOptionalOptimizedForSize*) other;
- (TestOptionalOptimizedForSizeBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TestOptionalOptimizedForSizeBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasO;
- (TestRequiredOptimizedForSize*) o;
- (TestOptionalOptimizedForSizeBuilder*) setO:(TestRequiredOptimizedForSize*) value;
- (TestOptionalOptimizedForSizeBuilder*) setOBuilder:(TestRequiredOptimizedForSizeBuilder*) builderForValue;
- (TestOptionalOptimizedForSizeBuilder*) mergeO:(TestRequiredOptimizedForSize*) value;
- (TestOptionalOptimizedForSizeBuilder*) clearO;
@end


// @@protoc_insertion_point(global_scope)