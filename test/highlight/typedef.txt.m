
typedef void *SDWebImageContextOption;
typedef id<NSCoding> SDStateImageURLDictionary;
typedef NSMutableDictionary<NSString *, id> SDCallbacksDictionary;
typedef NSMutableDictionary<NSString *, NSURL *> SDStateImageURLDictionary;
typedef id _Nonnull nonnull_id;
typedef SEL _Nonnull nonnull_SEL;


typedef NSString * SDImageCoderOption NS_STRING_ENUM;
typedef NSString * SDWebImageContextOption NS_EXTENSIBLE_STRING_ENUM;
typedef NSString * SDImageFormat NS_TYPED_ENUM;
typedef NSInteger SDImageFormat NS_TYPED_EXTENSIBLE_ENUM;


__attribute__((deprecated("Use DDContextAllowlistFilterLogFormatter instead")))
typedef DDContextAllowlistFilterLogFormatter DDContextWhitelistFilterLogFormatter;

typedef __attribute__((__ext_vector_type__(2))) float vector_float2;


typedef struct __attribute__((objc_boxable)) _NSRange {
    NSUInteger location;
    NSUInteger length;
} NSRange;


typedef struct _AspectBlock {
  __unused Class isa;
  void (*invoke)(struct _AspectBlock *block, ...);
} *AspectBlockRef;


@implementation ClassName
typedef struct {
    u_int64_t appMemory;
    u_int64_t usedMemory;
    u_int64_t totalMemory;
    u_int64_t availableMemory;
} Memory;
@end


typedef void(^blockName)(void);

typedef void (^AFURLSessionTaskDidFinishCollectingMetricsBlock)(NSURLSession *session, NSURLSessionTask *task, NSURLSessionTaskMetrics * metrics) API_AVAILABLE(ios(10), macosx(10.12), watchos(3), tvos(10));

typedef void (^JSONObjectBlock)(id json, JSONModelError *err) DEPRECATED_ATTRIBUTE;


typedef id (*NSNumberAllocImp)(id receiver, SEL selector);
typedef void (*mtl_failedMethodCallback)(Class, Method);


typedef NS_ENUM(NSUInteger, RLMSyncStopPolicy);

typedef NS_ENUM(NSUInteger, SDAnimatedImagePlaybackMode) {
    /**
     * From first to last frame and stop or next loop.
     */
    SDAnimatedImagePlaybackModeNormal = 0,
    /**
     * From last frame to first frame and stop or next loop.
     */
    SDAnimatedImagePlaybackModeReverse,
    /**
     * From first frame to last frame and reverse again, like reciprocating.
     */
    SDAnimatedImagePlaybackModeBounce,
    /**
     * From last frame to first frame and reverse again, like reversed reciprocating.
     */
    SDAnimatedImagePlaybackModeReversedBounce,
};

typedef NS_ERROR_ENUM(SDWebImageErrorDomain, SDWebImageError) {
    SDWebImageErrorInvalidURL = 1000, // The URL is invalid, such as nil URL or corrupted URL
};

typedef enum {
    AvatarStyleRound = 0,
    AvatarStyleRectangle,
} AvatarStyle;

typedef enum AvatarStyle : NSUInteger {
    AvatarStyleRound = 0,
    AvatarStyleRectangle,
} AvatarStyle;


NS_ENUM(NSInteger)
{
    ATZShellTerminationStatusError = 666,
    ATZShellLaunchError = 667
};


typedef NS_ENUM(NSInteger, TTCameraDetectionType) {
    TTCameraDetectionTypeNone,
    TTCameraDetectionTypeFace1 NS_AVAILABLE(10_7, 5_0),
    TTCameraDetectionTypeFace2 NS_ENUM_DEPRECATED_IOS(2_0, 9_0, "unavailable"),
    TTCameraDetectionTypeFace3 __deprecated_enum_msg("unavailable"),
    TTCameraDetectionTypeFace4 __attribute__((deprecated)) __deprecated_enum_msg("unavailable"),
} NS_ENUM_DEPRECATED_IOS(3_0, 7_0, "");


typedef NS_ENUM(NSInteger, SVProgressHUDStyle) {
    SVProgressHUDStyleLight NS_SWIFT_NAME(light),   // default style, white HUD with black text, HUD background will be blurred
    SVProgressHUDStyleDark NS_SWIFT_NAME(dark),     // black HUD and white text, HUD background will be blurred
    SVProgressHUDStyleCustom NS_SWIFT_NAME(custom)  // uses the fore- and background color properties
};


typedef NS_OPTIONS(NSUInteger, ActionType) {
    ActionTypeUp    = 1 << 0, // 1
    ActionTypeDown  = 1 << 1, // 2
    ActionTypeRight = 1 << 2, // 4
    ActionTypeLeft  = 1 << 3, // 8
};


