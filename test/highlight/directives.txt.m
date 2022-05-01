
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
