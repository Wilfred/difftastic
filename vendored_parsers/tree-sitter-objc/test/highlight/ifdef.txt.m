
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

