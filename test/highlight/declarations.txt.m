
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

