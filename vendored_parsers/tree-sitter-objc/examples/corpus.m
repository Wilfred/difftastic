
NSObject* (^blockName)(NSObject *);


int (^blockName)() = ^int() {return -1;};
int (^blockName)(int) = ^int(int a) {return -1;};
int (^blockName)(int, NSObject *) = ^int(int a, NSObject *object) {return -1;};

NSString * _Nullable(^blockName)(NSString * _Nonnull) = ^NSString * _Nullable(NSString * _Nonnull key) {
  return nil;
};


typedef void(^blockName)(void);
typedef void(^blockName)(NSObject *object);
typedef void(^blockName)(NSObject * _Nullable object);
typedef void(^blockName)(NSUInteger val1, NSUInteger val2);
typedef void (^blockName)(NSMutableOrderedSet <NSObject *> * _Nullable objects, NSInteger val1, NSBlock_declaration * _Nullable block_declaration);
typedef void (^blockName)(__kindof UIView * _Nonnull view);
typedef NSURLResponse * _Nullable (^blockName)(NSURLResponse * _Nonnull val1, NSBundle * _Nullable val2);

// type qualifier in block definition
typedef id _Nullable (^blockName)(NSString *name, NSBundle * _Nullable bundle);


@interface Block
- (void)loginWithCompletion:(nullable NSNumber *(^)(BOOL success, NSString *name, id object))completion;
@end

@implementation Block
- (void)loginWithCompletion:(nullable void(_Nonnull ^)(BOOL success, id object))completion {
  [self registerHandler:^(UIView * _Nonnull view, NSString * _Nonnull name, NSDictionary * _Nullable params, void (^ _Nonnull callback)(int, id _Nullable)) {
    if (handler) {
        handler(params, callback);
    }
  } forMethod:method];
}
- (void)URLSession:(NSURLSession *)session
 completionHandler:(void (^)(NSURLSessionResponseDisposition disposition))completionHandler {
}
@end


@interface Block
@property (nonatomic, copy) int (^blockName)(int, int);
@property (nonatomic, copy) int (^blockName)(int a, int b);
@property (nonatomic, copy) NSObject * (^blockName)(int, int);
@property (nonatomic, copy) id (^blockName)(int, int, UIImage * _Nonnull frame);
@property (nonatomic, strong) NSMutableDictionary<NSNumber *,void (^)(UIImage * _Nullable, NSTimeInterval)> *tasks;
@end


[someObject someMethodThatTakesABlock:^(id  _Nullable observer, id  _Nonnull object, NSDictionary<NSString *,id> * _Nonnull change) {
    int (^blockName)() = ^int() {return -1;};
}];


void SomeFunctionThatTakesABlock(returnType (^blockName)(int));


(returnType (^)(int, id))anotherBlock;


void(^blockName1)(void(^blockName2)(void));

@interface Block
- (void)someMethodThatTakesABlock:(void(^)(void(^)(void)))block;
@end


void (^blockName)(void);

void (^(^blockName)(void (^)(void)))(void);

void(^(^blockName)(NSDictionary *params))(UIImage *image) = ^(NSDictionary *params) {
    return ^(UIImage * image) {
    };
};


((id(*)(id, SEL, id, id, id, id, void(^)(NSURLRequest *)))objc_msgSend)(
  slf, swizzledSelector, session, task, response, newRequest, completionHandler
);


[self.KVOController observe:imageView keyPaths:@[NSStringFromSelector(@selector(currentFrameIndex)), NSStringFromSelector(@selector(currentLoopCount))] options:NSKeyValueObservingOptionNew block:^(id  _Nullable observer, id  _Nonnull object, NSDictionary<NSString *,id> * _Nonnull change) {
}];


@interface FLEXVariableEditorViewController : UIViewController {
    @protected
    void (^_Nullable _commitHandler)();
}
@end



extern void use(id);
extern void use_block(void (^)(void));

void use_block(int (^block_t)(void)) {
  block_t();
  return;
}

void test7(void) {
  use_block(^{return 1;});
}

// int (^square(int x))(void) {
//   return ^{ return x * x; };
// }

void test8(void) {
  int (^square_block)(void) = square(4);
  int i = square_block();
  NSLog(@"%d", i);
}

void (^simpleBlock)() = ^ _Nonnull { //expected-warning {{attribute '_Nonnull' ignored, because it cannot be applied to omitted return type}}
  return;
};

void (^simpleBlock6)() = ^ const (void) { //expected-warning {{'const' qualifier on omitted return type '<dependent type>' has no effect}}
  return;
};


// id (*IMP)(id, SEL, ...)
typedef NSObject * (* typedefIMP)(id thisSelf, SEL selector, NSString *filePath);

CGFloat (* msgSendIMP)(id, SEL, id, CGFloat) = (CGFloat (*)(id, SEL, id, CGFloat))objc_msgSend;

@interface NSMutableArray<T> : NSObject <NSCopying>
- (void)sortWithFunction:(int (*)(T, T))function;
- (void)getObjects:(T __strong *)objects length:(unsigned*)length;
@end



// void (^GlobalBlockName())(NSIndexPath *indexPath, BOOL isOn) {
//   return ^(NSIndexPath * _Nonnull indexPath, BOOL isOn) {
//   };
// }

// void (^GlobalBlockName(NSString *event, NSString *type))(NSIndexPath *indexPath, BOOL isOn) {
//     return ^(NSIndexPath * _Nonnull indexPath, BOOL isOn) {
//     };
// }


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


@interface ClassName
@end


@interface ClassName: SuperclassName
@end


@interface ClassName <ProtocolName>
@end

@interface ClassName : SuperclassName <ProtocolName>
@end

@interface ClassName <ProtocolName1, ProtocolName2>
@end


@interface ViewController <ObjectType: id<UITableViewDelegate, UITableViewDataSource>> : NSObject <ProtocolName>

@property (nonatomic, strong) NSMutableArray<ObjectType> *array;

@end

@interface SDMemoryCache <KeyType, ObjectType> () {
  
}
@end

@interface SDMemoryCache <KeyType, ObjectType> : NSCache <KeyType, ObjectType> <SDMemoryCache>


@end


@interface __GENERICS(NSArray, ObjectType) (BlocksKit)
@end

@interface __GENERICS(NSDictionary, KeyType, ObjectType) (BlocksKit)
@end


@interface ClassName : NSSet <TypeClassName *>
@end

@interface ClassName : NSSet <TypeClassName *> <ProtocolName>
@end


@interface PC1<T, U : NSObject *> : NSObject
@end

// Parse a type parameter with a bound that terminates in '>>'.
@interface PC2<T : id<NSObject>> : NSObject
@end

@interface PC8<T> : NSObject <NSObject>
@end


NS_ROOT_CLASS
@interface ClassName
@end


IB_DESIGNABLE
@interface ClassName
@end


@interface ClassName {
  type1 iv1;
  id iv2;
  NSObject *object;
  void (^blockName)(void);
}
@end

@interface ClassName {
@public
  NSObject *object;
}
@end


@interface ClassName
@property (readwrite, copy) float number;
@end


@interface ClassName
@property (readwrite, copy, nullable) NSObject *object;
@end


@interface ClassName
@property (readwrite, copy, nullable) NSObject *object, *object2;
@end


@interface ClassName
@property (nonatomic, readonly) NSArray <ObjectType> *array;
@property (nonatomic, readonly) NSArray <id<protocol>> *array;
@property (readwrite, copy) NSMapTable <NSString *, NSString *> *map;
@property (nonatomic) NSDictionary <NSURL *, NSOperation <SDWebImageDownloaderOperation> *> *URLOperations;
@property (nonatomic, copy) NSArray <NSObject *><ProtocolName, Optional> *array;
@end


@interface ClassName
+ (void)method:(int)a1 : (int)a2 k2: a3;
// - (void)method:(id)one, id two; // FIXME, WON'T FIX
@end


@interface ClassName
- (void)method;
- (nullable id)method;
- (nullable id<procotol>) sel;
@end


@interface ClassName
- (nullable id)objectForKey:(nonnull id)key;
@end


@implementation ClassName
@end


@implementation ClassName: SuperclassName
@end


@implementation ClassName
@synthesize p1, p2=v2;
@end


@implementation ClassName
@dynamic p1, p2;
@end


@implementation SDImageIOAnimatedCoder {
    size_t _width, _height;
    NSArray <SDImageIOCoderFrame *> *_frames;
}
@end


@protocol P4 -im1; @end
@interface I0<P4> @end
@implementation I0 -im1 { return 0; }; @end


@implementation ClassName {
  @private
  type1 iv2;
  @public
  type2 iv2;
  @protected
  type3 iv3;
}
@end


@implementation ClassName
- (void)sel {
  return;
}
@end


@implementation ClassName
- (return_type) method_name:( argumentType1 )argumentName1 
           joiningArgument2:( argumentType2 )argumentName2 
           joiningArgument3:( argumentType3 )argumentName3 {
  
}
@end


@implementation ClassName
- sel {
    self;
}
@end


@implementation ClassName
- (void)method; {
  
}
- (nullable id)method; {
  
}
@end


@interface ClassName(Category)
@end


@interface ClassName()
@end


@interface ClassName(Category)<P1, P2>
@end


@implementation ClassName(Category)
@end


@protocol Protocol<ProtocolName, ProtocolName>
@end


@protocol ProtocolName1;
@protocol ProtocolName1, ProtocolName2;
@protocol ProtocolName
@end


@class Class1, Class2;
@class RACSubject<ValueType>;
@class RACSignal<__covariant ValueType>;
@class RLMObject, RLMResults<RLMObjectType>;


FOUNDATION_EXPORT void func(tr);
FOUNDATION_EXPORT SDWebImageContextOption _Nonnull const SDWebImageContextCustomManager;
FOUNDATION_EXPORT CGContextRef __nullable SDGraphicsGetCurrentContext(void) CF_RETURNS_NOT_RETAINED;
UIKIT_EXTERN NSNotificationName const Notification;
CG_EXTERN CGFloat const FSCalendarStandardHeaderHeight;


@synchronized(self) {
  [obj method];
}


@autoreleasepool {
  [obj method];
}


@try {
  [obj method];
} @catch (NSException *exception) {
} @finally {
}

@try {
  [obj method];
} @catch (NSException *exception) {
}

@try {
  [obj method];
} @finally {
}

@try {
} @catch (EH1 *x) {
} @catch (EH2 *x) {
} @catch (EH3 *x) {
}

@try {
} @catch (...) {
}


@throw [NSException exceptionWithName:NSInternalInconsistencyException reason:@"" userInfo:nil];


@compatibility_alias Foo Bar;

if (@available(iOS 13.0, tvOS 13.0, watchOS 6.0, *)) {
  
}

if (__builtin_available(macos 10.12, *)) {
  
}

[super sel];
self = [super init];


[obj method];
[obj methodWithKey1:val1 key2:val2];
[obj :val1]; // - (void):(id)val1;


@selector(foo);
@selector(foo:);
@selector(foo::);
@selector(foo:bar:);
@selector(foo:bar::);


@protocol(ProtocolName);


@encode(id);
@encode(long long);
@encode(int []);
@encode(id []);
@encode(id <NSCopying> []);
@encode(_Complex int);
@encode(_Complex int[]);

int n;
@encode(int [n]);

@class NSObject;
@encode(NSObject *);


NSString *s1 = @"s1";
NSString *s2 = @"s2"
               @"s2";
NSString *s3 = @"s3"
                "s3";


NSDictionary *dict = @{
};

NSDictionary *dict = @{
  @"k1": @1, 
  @"k2": @(2), 
  @"k3": @"v3", 
  @"k4": @{
    @"k11": @11,
    @"k12": @[]
  }
};

NSDictionary *dict = @{
  self.class.prop: @{self.class.value : @(value)}
};

NSDictionary *dict = @{
  kCGImagePropertyGIFDictionary : @{
    kCGImagePropertyGIFDelayTime : @(duration)
  }
};

NSDictionary *dict = @{
  NSStringFromSelector(@selector(foo:bar:)) : value
};



NSArray *array = @[];
NSArray *array = @[1, @"v1", @{},];
NSArray *array = @[NSURLIsDirectoryKey, NSURLTotalFileAllocatedSizeKey];
NSArray *array = @[[NSArray class], [AFHTTPResponseSerializer <AFURLResponseSerialization> class]];



[NSMutableArray arrayWithObjects:@"v1", @"v2", @"v3", nil];


NSNumber *num1 = @(1);
NSNumber *num2 = @2;
NSNumber *num3 = @3.01;
NSNumber *num4 = @'Z';
NSNumber *num5 = @'z';
NSNumber *num6 = @'1';
NSNumber *NNegativeInt = @-1000;
NSNumber *NPositiveInt = @+1000;
NSNumber *NNegativeFloat = @-1000.1f;
NSNumber *NPositiveFloat = @+1000.1f;


@YES;
@NO;


nil;


!completion ?: completion();


CGImageSourceRef imageSource = CGImageSourceCreateWithData((__bridge CFDataRef) data, NULL);


(int)number;
(NSString *)string;
(void (^)(void))block;
(void (*)(void))imp;


[[NSBundle mainBundle] infoDictionary][(__bridge NSString *)kCFBundleExecutableKey];


self.view = ({
  UIView *view = [[UIView alloc] init];
  [self addSubview:view];

  view;
});


typeof(&*slef)strongSelf = self;
__weak __typeof(&*self)weakSelf = self;
__weak __typeof__(&*self)weakSelf = self;
__auto_type message = (typeof(self.message))[self.message copy];


va_list args;
va_start(args, count);
char *type = va_arg(args, char *);


[[NSDateFormatter alloc] init];
[[NSDateFormatter alloc] init];


extern void OBJC_CLASS_$_f;


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
// __attribute__((unused)) 解析错误
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


#ifdef A
@interface UIImageView () <CALayerDelegate>
@end

@interface AA () {
  
}
@property (nonatomic) int i;
#if AA
@property (nonatomic) int i;
#elif AA
-(void)test1;
#else
+(void)test2;
#endif
@end

@implementation AA

- (void)test {

}
#ifdef AA
- (void)test {

}
#else
- (void)test {

}
#endif

@end

#endif


NS_ASSUME_NONNULL_BEGIN
@interface ClassName
@property (nonatomic, strong) NSObject *object;
@end
NS_ASSUME_NONNULL_END


@interface ClassName
NS_ASSUME_NONNULL_BEGIN
@property (nonatomic, strong) NSObject *object;
NS_ASSUME_NONNULL_END
@end


#import "bar.h"


#import <foo/bar.h>


#if __has_include(<foo/bar.h>)
#import <foo/bar.h>
#endif


@import foo.bar


#ifdef COND

#endif


#ifdef COND

#else

#endif


@interface ClassName
#ifdef COND
@property (readwrite, copy) float number;
#endif
@end


@implementation ClassName
#ifdef COND
- (void)method {
  
}
#endif
@end


@implementation ClassName
#ifdef COND
- (void)method {
#ifdef COND
  self;
#else
  self = [super init];
#endif
}
#endif
@end


@implementation ClassName
#define SD_MAX_FILE_EXTENSION_LENGTH 1
#define function(key, default) \
[object methodForKey:(key) defaultValue:(default)]
@end


FOUNDATION_STATIC_INLINE NSUInteger SDMemoryCacheCostForImage(UIImage *image) {
#if SD_MAC
    frameCount = 1;
#elif SD_UIKIT || SD_WATCH
    frameCount = image.images.count > 0 ? image.images.count : 1;
#endif
    return -1;
}


#undef COND

#ifdef COND

#undef COND

#endif

#undef COND
#ifdef COND
#endif


API_AVAILABLE(ios(14.0), tvos(14.0), macos(11.0), watchos(7.0))
@interface ClassName
@end


#import <Foundation/Foundation.h>

#pragma mark - foobar
int main(int argc, char *argv[]) {
  #pragma foobar
  @autoreleasepool {
    #pragma foorbar

  }
}


#if (defined(__IPHONE_OS_VERSION_MAX_ALLOWED) && __IPHONE_OS_VERSION_MAX_ALLOWED < 90000)
    [obj method];
#endif

#if (defined(__IPHONE_OS_VERSION_MAX_ALLOWED) && __IPHONE_OS_VERSION_MAX_ALLOWED < 90000) \
|| (defined(__MAC_OS_X_VERSION_MAX_ALLOWED) && __MAC_OS_X_VERSION_MAX_ALLOWED < 101100)
    [obj method];
#endif

#if COND
#else
@implementation ClassName

#if COND
- (NSArray *)method:(BOOL)arg1
{
    #if COND
    if (arg1) {
    }
    #else
    #endif
    return @[];
}
#else
#endif

@end
#endif


#ifdef __OBJC__
#import <UIKit/UIKit.h> // retain
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C" // retain
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif


CF_EXTERN_C_BEGIN

NSMutableArray* GetOpaqueDataArray();

CF_EXTERN_C_END


NS_ASSUME_NONNULL_BEGIN 
NS_ASSUME_NONNULL_END 


@interface ClassName

@property () __weak id PROP;
@property (nonatomic, copy) NSArray <NSObject *> <ProtocolName> *array;
@property (nonatomic, weak) IBOutlet UIImageView *view;
@property (nonatomic, setter=setURL:) NSURL *url;
@property (nonatomic, atomic, class, readwrite, null_resettable, NS_NONATOMIC_IOSONLY) NSString *string;
@property (direct, readonly) int intProperty;

@end



__block CGFloat scale = 1;


NS_VALID_UNTIL_END_OF_SCOPE __strong typeof(self) strongSelf = self;


__unsafe_unretained UITableViewCell * cell;


static _Atomic(GPBEnumDescriptor*) descriptor = nil;


extern CGFloat kHeight() __attribute((weak));


for (int i = 0; i < 10; i++) {
}

for (int foo in foos) {
}

for (NSNumber *foo in foos) {
}

for (foo in [self foos]) {
}

for (foo in self.foo) {
}

for (id<ProtocolName> foo in self.foos) {
}

for (id<ProtocolName> foo in [self foo].foos) {
}

for (__unsafe_unretained UIView *subview in view.subviews) {
}

for (NSNumber * _Nonnull foo in foos) {
}


if ((quality < 0)) {
  return;
}


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


enum {
    UITableViewCellStyleDefault,
    UITableViewCellStyleValue1,
    UITableViewCellStyleValue2,
    UITableViewCellStyleSubtitle
};

typedef enum {
    UITableViewCellStyleDefault,
    UITableViewCellStyleValue1,
    UITableViewCellStyleValue2,
    UITableViewCellStyleSubtitle
} UITableViewCellStyle;

typedef enum {
    UITableViewCellStyleDefault,
    UITableViewCellStyleValue1,
    UITableViewCellStyleValue2,
    UITableViewCellStyleSubtitle
};

typedef NSInteger UITableViewCellStyle;


// enum attr-spec-seq(optional) identifier(optional) { enumerator-list }   
enum week{Mon, Tue, Wed}; // type specifier
enum week day; // declaration, "day" is the declarator

// Every declaration of an enum or a typedef is a definition.
enum week{Mon, Tue, Wed}day; // declaring an enum variable
                             // "week{Mon, Tue, Wed}" is the type specifier
                             // "day" is the declarator

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



NSMutableArray <ProtocolName> *array;
NSMutableArray <NSString *> *array;
NSMutableArray <id> *array;
NSMutableDictionary<NSURL *, NSDictionary<NSString *, id> *> *dict;
NSProgress * _Nullable __autoreleasing * _Nullable progress;
NSArray<__kindof UIView *> *backgroundSubviews;

@interface A
-(_Complex long double) complexLongDoubleValue;
@property IMP func;
@end

@interface NSArray (NSArrayCreation)
+ (id)arrayWithObjects:(const id [])objects count:(unsigned long)cnt;
-(void) test3: (Test*  [3] [4])b ;
@end


NSMutableArray<NSObject *> * array = (NSMutableArray<NSObject *> *)[NSMutableArray arrayWithCapacity:10];


[[NSMutableArray<ProtocolName> alloc] init];


static NSMapTable <Class <TTLElementProtocol>, NSString *> * mapTable = nil;


id<NSCoding> func(id<NSCoding> operation) {
  NSCParameterAssert(operation);
}

id<SDImageCoder> imageCoder;


__auto_type idx;


__unused NSObject *object;

NSObject __unused * __unused object __unused;
// NSObject __unused * __unused object __unused = [NSObject new]; // FIXME

typedef struct _AspectBlock {
  __unused Class isa;
  // void (__unused *invoke)(struct _AspectBlock *block, ...); // FIXME
} *AspectBlockRef;


@interface SDWebImage

- (nonnull UIImage *)imageWithActions:(nonnull NS_NOESCAPE SDGraphicsImageDrawingActions)actions;
- (NSArray *)mas_makeConstraints:(void (NS_NOESCAPE ^)(MASConstraintMaker *make))block;
- (void)inDatabase:(__attribute__((noescape)) void (^)(FMDatabase *db))block;

@end


@implementation SDWebImage

+ (NSArray*)extendedAttributeNamesAtPath:(NSString *)path traverseLink:(BOOL)follow error:(NSError **)err {
  
}

- (BOOL)createDirectory:(NSDictionary<NSFileAttributeKey,id> *)attributes error:(NSError * _Nullable __autoreleasing *)error {
}

- (BOOL)invokeWithInvocation:(NSInvocation *)inv returnValue:(out NSValue *__nullable *__nonnull)returnValue {
  
}

@end

@implementation TestUnarchiver

struct unarchive_list {
    int ifield;
    id *list;
};

@end

struct type_s {
   SS may_recurse;
   id id_val;
}; // FIXME

struct Derived : type_s { };

