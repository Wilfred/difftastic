
@interface NSError (RLMSync)

- (nullable RLMSyncErrorActionToken *)rlmSync_errorActionToken NS_REFINED_FOR_SWIFT;

- (nullable NSString *)rlmSync_clientResetBackedUpRealmPath NS_SWIFT_UNAVAILABLE("");

@property (readonly) RLMBSONType bsonType NS_REFINED_FOR_SWIFT;

@end

typedef NS_ENUM(NSUInteger, RLMSyncStopPolicy);

@class RLMObject, RLMResults<RLMObjectType>;


typedef void (^JSONObjectBlock)(id json, JSONModelError *err) DEPRECATED_ATTRIBUTE;


@interface FMDatabasePool : NSObject

- (void)inDatabase:(__attribute__((noescape)) void (^)(FMDatabase *db))block;

@end

@interface YYTextKeyboardManager : NSObject

- (instancetype)init UNAVAILABLE_ATTRIBUTE;

+ (instancetype)rubyWithCTRubyRef:(CTRubyAnnotationRef)ctRuby NS_AVAILABLE_IOS(8_0);

@end

@implementation YYTextContainer {
    @package
    BOOL _readonly; ///< used only in YYTextLayout.implementation
}

- (CTParagraphStyleRef)yy_CTStyle CF_RETURNS_RETAINED {
}

@end

// YYText/YYText/Component/YYTextMagnifier.m

typedef void (^AFURLSessionTaskDidFinishCollectingMetricsBlock)(NSURLSession *session, NSURLSessionTask *task, NSURLSessionTaskMetrics * metrics) API_AVAILABLE(ios(10), macosx(10.12), watchos(3), tvos(10));


#if (defined(__IPHONE_OS_VERSION_MAX_ALLOWED) && __IPHONE_OS_VERSION_MAX_ALLOWED < 90000)\
|| (defined(__MAC_OS_X_VERSION_MAX_ALLOWED) && __MAC_OS_X_VERSION_MAX_ALLOWED < 101100)
    NSString *localFilePath = [resumeDictionary objectForKey:@"NSURLSessionResumeInfoLocalPath"];
    if ([localFilePath length] < 1) return NO;
    return [[NSFileManager defaultManager] fileExistsAtPath:localFilePath];
#endif


CG_INLINE CGPoint CGPointOffset(CGPoint point, CGFloat dx, CGFloat dy)
{
    return CGPointMake(point.x + dx, point.y + dy);
}


NS_CLASS_AVAILABLE_IOS(7_0) @interface SLKTextViewController
@end

@interface SWTableViewCell
@property (nonatomic, strong) SWUtilityButtonView *leftUtilityButtonsView, *rightUtilityButtonsView;
@end


typedef NS_ENUM(NSInteger, SVProgressHUDStyle) {
    SVProgressHUDStyleLight NS_SWIFT_NAME(light),   // default style, white HUD with black text, HUD background will be blurred
    SVProgressHUDStyleDark NS_SWIFT_NAME(dark),     // black HUD and white text, HUD background will be blurred
    SVProgressHUDStyleCustom NS_SWIFT_NAME(custom)  // uses the fore- and background color properties
};

@interface SVProgressHUD ()
#if TARGET_OS_IOS && __IPHONE_OS_VERSION_MAX_ALLOWED >= 100000
@property (nonatomic, strong) UINotificationFeedbackGenerator *hapticGenerator NS_AVAILABLE_IOS(10_0);
#endif
@end


__typeof(&*self)weakSelf = self;

// /QMUI_iOS/QMUIKit/QMUIComponents/CALayer+QMUIViewAnimation.m

SEL selector = NSSelectorFromString([NSString stringWithFormat:@"_%@:%@:", @"appearanceForClass", @"withContainerList"]);



// + (PL__NSArray_of(NSLayoutConstraint *) *)autoCreateAndInstallConstraints:(__attribute__((noescape)) ALConstraintsBlock)block
// {

// }


extern void NWLForwardWithoutFilter(NWLContext context, CFStringRef format, ...) CF_FORMAT_FUNCTION(2,3);


@encode(long long);

@interface NSArray (MASAdditions)

- (NSArray *)mas_makeConstraints:(void (NS_NOESCAPE ^)(MASConstraintMaker *make))block;

@property (nonatomic, strong, readonly) MASViewAttribute *mas_safeAreaLayoutGuide NS_AVAILABLE_IOS(11.0);

@property (nonatomic, strong, readonly) MASViewAttribute *mas_topLayoutGuide NS_DEPRECATED_IOS(8.0, 11.0);

@end



typedef void (*mtl_failedMethodCallback)(Class, Method);

// MJExtension/MJExtension/MJExtensionConst.m
// ifdef without blank line
#if AAA
#endif
for (__unsafe_unretained UIView *subview in view.subviews) {
    if ([subview isKindOfClass:clazz]) {
        return subview;
    }
}

typedef id (*NSNumberAllocImp)(id receiver, SEL selector);


[NSValue valueWithBytes:&value objCType:@encode(__typeof__(value))];

NS_SWIFT_NAME(ListDiff(oldArray:newArray:option:))
FOUNDATION_EXTERN IGListIndexSetResult *IGListDiff(NSArray<id<IGListDiffable>> *_Nullable oldArray,
                                                   NSArray<id<IGListDiffable>> *_Nullable newArray,
                                                   IGListDiffOption option);



CG_EXTERN CGFloat const FSCalendarStandardHeaderHeight;


((id(*)(id, SEL, id, id, id, id, void(^)(NSURLRequest *)))objc_msgSend)(
  slf, swizzledSelector, session, task, response, newRequest, completionHandler
  );
  
@implementation FLEX
- (void)method {
  va_list args;
  va_start(args, count);
  char *type = va_arg(args, char *);

  return [super.nonemptySections flex_filtered:^BOOL(FLEXTableViewSection *section, NSUInteger idx) {
    return section != self.descriptionSection;
  }];
}

@end

self.inputPlaceholderText =
@"You can put any valid JSON here, such as a string, number, array, or dictionary:"
"\n\"This is a string\"";

@interface FLEXVariableEditorViewController : UIViewController {
    @protected
    id _target;
    _Nullable id _data;
    void (^_Nullable _commitHandler)();
}
@end
@interface FLAnimatedImage
@property (nonatomic, strong, readonly) __attribute__((NSObject)) CGImageSourceRef imageSource;
@end


API_DEPRECATED("Use DDOSLogger instead", macosx(10.4,10.12), ios(2.0,10.0), watchos(2.0,3.0), tvos(9.0,10.0))
@interface DDASLLogger : DDAbstractLogger <DDLogger>
@end

@interface CocoaLumberjack
- (void)removeFormatter:(id<DDLogFormatter>)formatter NS_SWIFT_NAME(remove(_:));
- (void)removeAllFormatters NS_SWIFT_NAME(removeAll());
@end

@interface CocoaLumberjack
- (nullable NSString *)createNewLogFile __attribute__((deprecated("Use -createNewLogFileWithError:"))) NS_SWIFT_UNAVAILABLE("Use -createNewLogFileWithError:");
@property (class, nonatomic, DISPATCH_QUEUE_REFERENCE_TYPE, readonly) dispatch_queue_t loggingQueue;
@end

@implementation CocoaLumberjack
- (void)applicationWillTerminate:(NSNotification * __attribute__((unused)))notification {
}
@end

__attribute__((deprecated("Use DDContextAllowlistFilterLogFormatter instead")))
typedef DDContextAllowlistFilterLogFormatter DDContextWhitelistFilterLogFormatter;

__auto_type copy = (typeof(self.message))[self.message copy];

@implementation CocoaAsyncSocket

- (instancetype)init NS_UNAVAILABLE
{
  NSAssert(0, @"Use the designated initializer");
  return nil;
}

@end


NSArray<__kindof UIView *> *backgroundSubviews = subview.subviews;


@interface NSArray (Chameleon)
+ (NSArray *)arrayOfColorsWithColorScheme:(ColorScheme)colorScheme
                                     with:(UIColor *)color
                               flatScheme:(BOOL)isFlatScheme __attribute((deprecated(" Use -arrayOfColorsWithColorScheme:usingColor:withFlatScheme: instead (First deprecated in Chameleon 2.0).")));

@end


// https://gist.github.com/smileyborg/d513754bc1cf41678054
// equals to NSArray <ObjectType> (BlocksKit)
@interface __GENERICS(NSArray, ObjectType) (BlocksKit)
@property (NS_NONATOMIC_IOSONLY, readonly, strong) id bk_ensuredDynamicDelegate;
@end

@interface __GENERICS(NSDictionary, KeyType, ObjectType) (BlocksKit)
- (BOOL)invokeWithInvocation:(NSInvocation *)inv returnValue:(out NSValue *__nullable *__nonnull)returnValue;
- (void)removeBlockImplementationForMethod:(SEL)selector __unused;
@end

void (^wrapper)(BOOL) = (void(^)(BOOL))block;
typeof(&*weakController) strongController = weakController;

@implementation BlocksKit
- (void)removeBlockImplementationForMethod:(SEL)selector __unused {
  return (__bridge_transfer NSTimer *)CFRunLoopTimerCreateWithHandler(NULL, fireDate, interval, 0, 0, (void(^)(CFRunLoopTimerRef))block);
}
@end

typedef struct _AspectBlock {
  __unused Class isa;
  // void (__unused *invoke)(struct _AspectBlock *block, ...); // FIXME
} *AspectBlockRef;
@interface ASIHTTPRequest
@property (retain,setter=setURL:, nonatomic) NSURL *url;
@end

@implementation ASIHTTPRequest
- (void)test {
  for (header in [self requestHeaders]) {
    CFHTTPMessageSetHeaderFieldValue(request, (CFStringRef)header, (CFStringRef)[[self requestHeaders] objectForKey:header]);
  }
}
@end

NS_ENUM(NSInteger)
{
    ATZShellTerminationStatusError = 666,
    ATZShellLaunchError = 667
};


@implementation ATZPackage
@dynamic isInstalled, type, website, extension;
@end


@interface UIImageView (_AFNetworking)
@property (readwrite, nonatomic, strong, setter = af_setActiveImageDownloadReceipt:) AFImageDownloadReceipt *af_activeImageDownloadReceipt;
@end

NSSet *classes = [NSSet setWithArray:@[[NSArray class], [AFHTTPResponseSerializer <AFURLResponseSerialization> class]]];


NS_EXTENSION_UNAVAILABLE_IOS("Use view controller based solutions where appropriate instead.")
@interface AFNetworking

- (void)setQueryStringSerializationWithBlock:(nullable NSString * _Nullable (^)(NSURLRequest *request, id parameters, NSError * __autoreleasing *error))block;

- (NSURLSessionDownloadTask *)downloadTaskWithRequest:(NSURLRequest *)request
                                             progress:(nullable void (^)(NSProgress *downloadProgress))downloadProgressBlock
                                          destination:(nullable NSURL * (^)(NSURL *targetPath, NSURLResponse *response))destination
                                    completionHandler:(nullable void (^)(NSURLResponse *response, NSURL * _Nullable filePath, NSError * _Nullable error))completionHandler;
@end

@implementation AFNetworking

- (void)setQueryStringSerializationWithBlock:(NSString *(^)(NSURLRequest *, id, NSError *__autoreleasing *))block {
    self.queryStringSerialization = block;
}

- (void)loadRequest:(NSURLRequest *)request
         navigation:(WKNavigation * _Nonnull)navigation
           progress:(NSProgress * _Nullable __autoreleasing * _Nullable)progress
            success:(nullable NSString * (^)(NSHTTPURLResponse *response, NSString *HTML))success
            failure:(nullable void (^)(NSError *error))failure {
              
            }

@end

