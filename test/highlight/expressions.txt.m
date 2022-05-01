
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

