
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

void test8(void) {
  int (^square_block)(void) = square(4);
  int i = square_block();
  NSLog(@"%d", i);
}

void (^simpleBlock)() = ^ _Nonnull {
  return;
};

void (^simpleBlock6)() = ^ const (void) {
  return;
};

typedef NSObject * (* typedefIMP)(id thisSelf, SEL selector, NSString *filePath);

CGFloat (* msgSendIMP)(id, SEL, id, CGFloat) = (CGFloat (*)(id, SEL, id, CGFloat))objc_msgSend;

@interface NSMutableArray<T> : NSObject <NSCopying>
- (void)sortWithFunction:(int (*)(T, T))function;
- (void)getObjects:(T __strong *)objects length:(unsigned*)length;
@end

