// Generated by Apple Swift version 2.3 (swiftlang-800.10.12 clang-800.0.38)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import Dispatch;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface NSData (SWIFT_EXTENSION(Starscream))
@end

@class NSError;
@class NSURL;
@class NSStream;

SWIFT_CLASS("_TtC10Starscream9WebSocket")
@interface WebSocket : NSObject <NSStreamDelegate>
+ (NSString * _Nonnull)ErrorDomain;

/// Where the callback is executed. It defaults to the main UI thread queue.
@property (nonatomic, strong) dispatch_queue_t _Nonnull callbackQueue;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable optionalProtocols;
@property (nonatomic, readonly, copy) NSString * _Nonnull headerWSUpgradeName;
@property (nonatomic, readonly, copy) NSString * _Nonnull headerWSUpgradeValue;
@property (nonatomic, readonly, copy) NSString * _Nonnull headerWSHostName;
@property (nonatomic, readonly, copy) NSString * _Nonnull headerWSConnectionName;
@property (nonatomic, readonly, copy) NSString * _Nonnull headerWSConnectionValue;
@property (nonatomic, readonly, copy) NSString * _Nonnull headerWSProtocolName;
@property (nonatomic, readonly, copy) NSString * _Nonnull headerWSVersionName;
@property (nonatomic, readonly, copy) NSString * _Nonnull headerWSVersionValue;
@property (nonatomic, readonly, copy) NSString * _Nonnull headerWSKeyName;
@property (nonatomic, readonly, copy) NSString * _Nonnull headerOriginName;
@property (nonatomic, readonly, copy) NSString * _Nonnull headerWSAcceptName;
@property (nonatomic, readonly) NSInteger BUFFER_MAX;
@property (nonatomic, readonly) uint8_t FinMask;
@property (nonatomic, readonly) uint8_t OpCodeMask;
@property (nonatomic, readonly) uint8_t RSVMask;
@property (nonatomic, readonly) uint8_t MaskMask;
@property (nonatomic, readonly) uint8_t PayloadLenMask;
@property (nonatomic, readonly) NSInteger MaxFrameSize;
@property (nonatomic, readonly) NSInteger httpSwitchProtocolCode;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull supportedSSLSchemes;
@property (nonatomic, copy) void (^ _Nullable onConnect)(void);
@property (nonatomic, copy) void (^ _Nullable onDisconnect)(NSError * _Nullable);
@property (nonatomic, copy) void (^ _Nullable onText)(NSString * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable onData)(NSData * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable onPong)(void);
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull headers;
@property (nonatomic) BOOL voipEnabled;
@property (nonatomic) BOOL selfSignedSSL;
@property (nonatomic, copy) NSString * _Nullable origin;
@property (nonatomic) NSInteger timeout;
@property (nonatomic, readonly) BOOL isConnected;
@property (nonatomic, readonly, strong) NSURL * _Nonnull currentURL;

/// Used for setting protocols.
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url protocols:(NSArray<NSString *> * _Nullable)protocols OBJC_DESIGNATED_INITIALIZER;

/// Connect to the WebSocket server on a background thread.
- (void)connect;

/// Write a string to the websocket. This sends it as a text frame.
///
/// If you supply a non-nil completion block, I will perform it when the write completes.
///
/// \param str The string to write.
///
/// \param completion The (optional) completion handler.
- (void)writeString:(NSString * _Nonnull)str completion:(void (^ _Nullable)(void))completion;

/// Write binary data to the websocket. This sends it as a binary frame.
///
/// If you supply a non-nil completion block, I will perform it when the write completes.
///
/// \param data The data to write.
///
/// \param completion The (optional) completion handler.
- (void)writeData:(NSData * _Nonnull)data completion:(void (^ _Nullable)(void))completion;
- (void)writePing:(NSData * _Nonnull)data completion:(void (^ _Nullable)(void))completion;
- (void)stream:(NSStream * _Nonnull)aStream handleEvent:(NSStreamEvent)eventCode;
@end

#pragma clang diagnostic pop
