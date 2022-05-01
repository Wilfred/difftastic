
#import "bar.h"


#import <foo/bar.h>


#if __has_include(<foo/bar.h>)
#import <foo/bar.h>
#endif


@import foo.bar

