
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

