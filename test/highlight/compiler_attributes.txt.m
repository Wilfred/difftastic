
API_DEPRECATED("Use DDOSLogger instead", macosx(10.4,10.12), ios(2.0,10.0), watchos(2.0,3.0), tvos(9.0,10.0))
@interface DDASLLogger : DDAbstractLogger <DDLogger>
@end

NS_CLASS_AVAILABLE_IOS(7_0)
@interface SLKTextViewController
@end

__attribute__((objc_runtime_name("MySecretNamespace.Protocol3")))
@protocol Protocol3
@end

__attribute__((objc_nonlazy_class))
@implementation E @end

__attribute__((objc_nonlazy_class))
@implementation E (MyCat) @end

__attribute__((objc_class_stub))
__attribute__((objc_subclassing_restricted))
@interface ValidClassStubAttribute : NSObject
@end

@implementation ValidClassStubAttribute (MyCategory)
@end


@interface ClassName

@property (nonatomic) int val __deprecated_msg("availbility");
@property (nonatomic) id val NS_AVAILABLE_IOS(11.0);
@property (nonatomic) id val NS_DEPRECATED_IOS(8.0, 11.0);
@property (nonatomic) id val API_UNAVAILABLE(macos, tvos);
@property (nonatomic) BlockName _Nullable block;

@property int p __attribute__((section("__TEXT,foo")));
@end


@interface FLAnimatedImage
@property (nonatomic, strong, readonly) __attribute__((NSObject)) CGImageSourceRef imageSource;
@end


@interface ClassName

- (instancetype)init UNAVAILABLE_ATTRIBUTE;
+ (instancetype)rubyWithCTRubyRef:(CTRubyAnnotationRef)ctRuby NS_AVAILABLE_IOS(8_0);
- (instancetype)method:(id)v1, ... NS_REQUIRES_NIL_TERMINATION;
- (NSArray *)method:(id)v1 API_AVAILABLE(ios(11.0), tvos(11.0), macos(13.0));
- (BOOL)method:(NSObject *)object DEPRECATED_MSG_ATTRIBUTE("use -[ClassName method:] instead");
- (void)method:(NSArray<NSDictionary *> *)array __attribute__((deprecated("use -[ClassName method:] instead")));
- (void)method:(NSArray<NSDictionary *> *)array __attribute((deprecated("use -[ClassName method:] instead")));
- (nullable NSString *)method __attribute__((deprecated("Use -[ClassName method:]"))) NS_SWIFT_UNAVAILABLE("Use -method:");

-(void) one_arg: (__attribute__((nonnull)) int *) arg1;
-(void)m0:(__attribute__((noescape)) BlockTy)p;
- (char)isEqual:(id) __attribute__((ns_consumed)) object;
@end

@implementation YYText

- (instancetype)init NS_UNAVAILABLE
{
  NSAssert(0, @"Use the designated initializer");
  return nil;
}

- (CTParagraphStyleRef)yy_CTStyle CF_RETURNS_RETAINED {
  
}

@end

@interface ClassName
+ (CGColorSpaceRef _Nonnull)colorSpaceGetDeviceRGB CF_RETURNS_NOT_RETAINED;
- (instancetype)initWithClassName:(NSString *)name NS_DESIGNATED_INITIALIZER;
- (void)oc_method_mustCallSuper NS_REQUIRES_SUPER;
- (void)function:(const char *)function
            line:(NSUInteger)line
          format:(NSString *)format, ... NS_FORMAT_FUNCTION(3,4);

@end


void log_obj(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);
void log_c(const char *format, ...) __attribute__ ((format (printf, 1, 2)));
// void f2(int *_Nonnull __attribute__((nonnull)) p) {} // FIXME, WONT FIX


extern void NWLForwardWithoutFilter(NWLContext context, CFStringRef format, ...) CF_FORMAT_FUNCTION(2,3);


FOUNDATION_EXPORT SDWebImageContextOption _Nonnull const SDWebImageContextCustomManager API_DEPRECATED("The", macos(10.10));
FOUNDATION_EXPORT SDImageCoderOption _Nonnull const SDImageCoderWebImageContext API_DEPRECATED("The coder component will be seperated from Core subspec in the future. Update your code to not rely on this context option.", macos(10.10, API_TO_BE_DEPRECATED), ios(8.0, API_TO_BE_DEPRECATED), tvos(9.0, API_TO_BE_DEPRECATED), watchos(2.0, API_TO_BE_DEPRECATED));


typedef void (^JSONObjectBlock)(id json, JSONModelError *err) DEPRECATED_ATTRIBUTE;
typedef void (^AFURLSessionTaskDidFinishCollectingMetricsBlock)(NSURLSession *session, NSURLSessionTask *task, NSURLSessionTaskMetrics * metrics) API_AVAILABLE(ios(10), macosx(10.12), watchos(3), tvos(10));


@interface SDWebImage
@property (readonly) RLMBSONType bsonType NS_REFINED_FOR_SWIFT;
@end


__attribute__((__swift_name__("SDWebImage")))
@interface SDWebImage
+ (NSArray<SDImageFrame *> * _Nullable)framesFromAnimatedImage:(UIImage * _Nullable)animatedImage NS_SWIFT_NAME(frames(from:to:));
- (void)removeFormatter:(id<DDLogFormatter>)formatter NS_SWIFT_NAME(remove(_:));
- (void)removeAllFormatters NS_SWIFT_NAME(removeAll());
- (void)removeAllFormatters __attribute__((__swift_name__("removeAll()")));
- (nullable NSString *)rlmSync_clientResetBackedUpRealmPath NS_SWIFT_UNAVAILABLE("");
@end


NS_SWIFT_NAME(ListDiff(oldArray:newArray:option:))
FOUNDATION_EXTERN IGListIndexSetResult *IGListDiff(NSArray<id<IGListDiffable>> *_Nullable oldArray,
                                                   NSArray<id<IGListDiffable>> *_Nullable newArray,
                                                   IGListDiffOption option);


NS_EXTENSION_UNAVAILABLE_IOS("Use view controller based solutions where appropriate instead.")
@interface AFNetworking
@end


@interface __GENERICS(NSDictionary, KeyType, ObjectType) (BlocksKit)
- (void)removeBlockImplementationForMethod:(SEL)selector __unused;
@end

@implementation BlocksKit
- (void)removeBlockImplementationForMethod:(SEL)selector __unused {
  return (__bridge_transfer NSTimer *)CFRunLoopTimerCreateWithHandler(NULL, fireDate, interval, 0, 0, (void(^)(CFRunLoopTimerRef))block);
}
- (void)applicationWillTerminate:(NSNotification * __attribute__((unused)))notification { }
- (void)applicationWillTerminate:(int __attribute__((unused)))notification { }
@end

