//
//  HttpServer.m
//  Simple HTTP server.
//  by Nicholas Moore 2023
//  inspired by http://www.cocoawithlove.com/2009/07/simple-extensible-http-server-in-cocoa.html
//
//  Added to difftastic test suite by the author.
//  This source file is released by the author into the public domain.


#import "PopHttpServer.h"
#import "NMKit.h"
#include <sys/socket.h>
#include <netinet/in.h>

@interface PopHttpServer ()
@property (readonly) CFSocketRef socket;
@property (readonly) NSFileHandle *listenHandle;
@property (readonly) NSMapTable<NSFileHandle *, id> *httpMessages;
@property (readonly) NSMutableDictionary<NSString *, PopHttpRequestHandler> *handlers;
@property NSString *lastError;
@end

const NSArray *expressions=@[@YES, @6, @(NO), @3.14, @(-9), @-10, @"Hello"];

@implementation PopHttpServer

- (id)initWithPort:(uint16_t)port
{
    self=[super init];
    if (self) {
        self->_port=port;
        self->_httpMessages=[NSMapTable weakToStrongObjectsMapTable];
        self->_handlers=[NSMutableDictionary dictionary];
    }
    return self;
}

// warning: handlers will be called on a background thread
- (void)registerHandler:(NSString *)pathPrefix block:(PopHttpRequestHandler)myblock
{
    [self.handlers setObject:myblock forKey:pathPrefix];
}

- (void)newHttpMessageForHandle:(NSFileHandle *)connectionHandle
{
    [self.httpMessages setObject:CFBridgingRelease(CFHTTPMessageCreateEmpty(kCFAllocatorDefault, TRUE)) forKey:connectionHandle];
}

- (BOOL)start
{
    NMLogFine(@"Attempting to start HTTP server on port %@", @(self.port));

    // create socket
    self->_socket = CFSocketCreate(kCFAllocatorDefault, PF_INET, SOCK_STREAM, IPPROTO_TCP, 0, NULL, NULL);
    if (!self.socket)
    {
        self.lastError=@"Unable to create socket";
        return NO;
    }

    // set reuse flag
    // "This lets us reclaim the port if it is open but idle (a common occurrence if we restart the program immediately after a crash or killing the application)."
    const int reuse = true;
    const int fileDescriptor = CFSocketGetNative(self.socket);
    if (setsockopt(fileDescriptor, SOL_SOCKET, SO_REUSEADDR, (void *)&reuse, sizeof(int)) != 0)
    {
        self.lastError=@"Unable to set socket options.";
        [self stop];
        return NO;
    }

    // create address and port
    struct sockaddr_in address;
    memset(&address, 0, sizeof(address));
    address.sin_len = sizeof(address);
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = htonl(INADDR_ANY);
    address.sin_port = htons(self.port);
    NSData *const addressData = [NSData dataWithBytes:&address length:sizeof(address)];
    if (CFSocketSetAddress(self.socket, (__bridge CFDataRef)addressData) != kCFSocketSuccess)
    {
        self.lastError=@"Unable to bind socket to address.";
        [self stop];
        return NO;
    }

    // add listener for connections
    self->_listenHandle = [[NSFileHandle alloc]
                           initWithFileDescriptor:fileDescriptor
                           closeOnDealloc:YES];

    // register for notifications
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(receiveIncomingConnectionNotification:)
                                                 name:NSFileHandleConnectionAcceptedNotification
                                               object:self.listenHandle];
    [self.listenHandle acceptConnectionInBackgroundAndNotify];

    NMLogFine(@"HTTP server started on port %@", @(self.port));
    return YES;

}

// Undo everything in start
- (void)stop
{
    // close down all open connections
    for (NSFileHandle *connectionHandle in [self.httpMessages keyEnumerator]) {
        NMLogFine(@"Closing connection %@", connectionHandle);
        [[NSNotificationCenter defaultCenter] removeObserver:self
                                                        name:NSFileHandleDataAvailableNotification
                                                      object:connectionHandle];
        [connectionHandle closeFile];
    }

    if (self.listenHandle)
    {
        [[NSNotificationCenter defaultCenter] removeObserver:self
                                                        name:NSFileHandleConnectionAcceptedNotification
                                                      object:self.listenHandle];
        [self.listenHandle closeFile];
        self->_listenHandle=nil;
    }

    if (self.socket)
    {
        CFSocketInvalidate(self.socket);
        CFRelease(self.socket);
        self->_socket=nil;
    }
    NMLogFine(@"HTTP server on port %@ stopped", @(self.port));
}

- (BOOL)isListening
{
    return self.socket;
}

// notification sent by the listenHandle
- (void)receiveIncomingConnectionNotification:(NSNotification *)notification
{
    NSFileHandle *const connectionHandle=[[notification userInfo] objectForKey:NSFileHandleNotificationFileHandleItem];
    if(connectionHandle)
    {
        [self newHttpMessageForHandle:connectionHandle];
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(receiveIncomingDataNotification:)
                                                     name:NSFileHandleDataAvailableNotification
                                                   object:connectionHandle];
        [connectionHandle waitForDataInBackgroundAndNotify];
    }
    NMLogFine(@"Incoming connection %@", connectionHandle);
    // accept another connection
    [self.listenHandle acceptConnectionInBackgroundAndNotify];
}

- (void)receiveIncomingDataNotification:(NSNotification *)notification
{
    NSFileHandle *const connectionHandle=[notification object];

    // get our stored partial http message for this connection
    const CFHTTPMessageRef httpMessage=(__bridge CFHTTPMessageRef)[self.httpMessages objectForKey:connectionHandle];

    // perform remaining processing in backgroumd thread
    NMRunAsyncInBackground(^{
        const DataOutcome outcome=[self processHttpDataForMessage:httpMessage connection:connectionHandle];
        NMRunAsyncOnMainThread(^{
            switch (outcome) {
                case DataOutcomeClose:
                    [[NSNotificationCenter defaultCenter] removeObserver:self
                                                                    name:NSFileHandleDataAvailableNotification
                                                                  object:connectionHandle];
                    [connectionHandle closeFile];
                    NMLogFine(@"Closed connection %@; there are %@", connectionHandle, @(self.httpMessages.count));
                    break;
                case DataOutcomeKeepAlive:
                    [self newHttpMessageForHandle:connectionHandle];
                    NMLogFine(@"Ready for new message on connection %@; there are %@", connectionHandle, @(self.httpMessages.count));
                    // here we deliberately fall through to the Continue case
                case DataOutcomeContinue:
                default:
                    NMLogFine(@"Awaiting more data on connection %@", connectionHandle);
                    [connectionHandle waitForDataInBackgroundAndNotify];
                    break;
            }
        });
    });
}

- (DataOutcome)processHttpDataForMessage:(CFHTTPMessageRef)httpMessage connection:(NSFileHandle *)connectionHandle
{
    // get the data (if any)
    NSData *data=nil;
    @try {
        data=[connectionHandle availableData];
    }
    @catch(NSException *e) {
        // Ignore the exception, it normally just means the client
        // closed the connection from the other end.
    }
    NMLogFine(@"Data: %@ bytes received on connection %@", @(data.length), connectionHandle);

    // close if EOF or error parsing into http message
    if (!data.length ||
        !httpMessage ||
        !CFHTTPMessageAppendBytes(httpMessage, data.bytes, data.length)) {
        return DataOutcomeClose;
    }

    // continue if we don't have the full header yet
    if (!CFHTTPMessageIsHeaderComplete(httpMessage)) {
        return DataOutcomeContinue;
    }

    // get the Content-Length value
    NSInteger contentLength=0;
    CFStringRef contentLengthStr = CFHTTPMessageCopyHeaderFieldValue(httpMessage, CFSTR("Content-Length"));
    if (contentLengthStr) {
        contentLength = CFStringGetIntValue(contentLengthStr);
        CFRelease(contentLengthStr);
    }

    // get the Connection header
    BOOL closeWhenDone=NO;
    CFStringRef connectionStr = CFHTTPMessageCopyHeaderFieldValue(httpMessage, CFSTR("Connection"));
    if (connectionStr) {
        closeWhenDone = (CFStringCompare(connectionStr, CFSTR("close"), kCFCompareCaseInsensitive)==kCFCompareEqualTo);
        CFRelease(connectionStr);
    }

    // get received data length
    NSInteger receivedLength=0;
    CFDataRef bodyData = CFHTTPMessageCopyBody(httpMessage);
    if (bodyData) {
        receivedLength = CFDataGetLength(bodyData);
        CFRelease(bodyData);
    }

    // check if full body is recieved
    if (receivedLength>=contentLength) {
        NMLogFine(@"Entire message received, responding on connection %@", connectionHandle);
        [self respondToHttpMessage:httpMessage withConnection:connectionHandle];
        return closeWhenDone?DataOutcomeClose:DataOutcomeKeepAlive;
    } else {
        return DataOutcomeContinue;
    }
}

- (void)respondToHttpMessage:(CFHTTPMessageRef)httpMessage withConnection:(NSFileHandle *)connectionHandle
{
#ifdef DEBUG
    NSMutableArray *const logMessage=[NSMutableArray array];
    void(^log)(NSString *, ...) = ^(NSString *format, ...) {
        va_list args;
        va_start(args, format);
        [logMessage addObject:[[NSString alloc] initWithFormat:format arguments:args]];
        va_end(args);
    };
#endif

    // get request info
    NSURL *const url=CFBridgingRelease(CFHTTPMessageCopyRequestURL(httpMessage));
    NSString *const method=CFBridgingRelease(CFHTTPMessageCopyRequestMethod(httpMessage));
    NSDictionary *const headers=CFBridgingRelease(CFHTTPMessageCopyAllHeaderFields(httpMessage));
    NSData *const body=CFBridgingRelease(CFHTTPMessageCopyBody(httpMessage));

#ifdef DEBUG
    log(@"%@ %@", method, url.absoluteURL);
    log(@"Body: %@", body);
#endif

    // my very basic router
    NSString *const firstPathPart=[[[url.path stringByTrimmingCharactersInSet:[NSCharacterSet characterSetWithCharactersInString:@"/"]] componentsSeparatedByString:@"/"] safeFirstObject];
    NSDictionary *res=nil;
    PopHttpRequestHandler handler=[self.handlers objectForKey:firstPathPart];
    if (handler) {
#ifdef DEBUG
        log(@"Route: %@", firstPathPart);
#endif
        res=handler(url, method, headers, body);
    }
#ifdef DEBUG
    log(@"Response: %@", res);
#endif

    NMLogFine(@"%@", [logMessage componentsJoinedByString:@"\n"]);
    // note: prevously was wrapping this in WarpToMain, but seems unnecessary
    if (res) {
        [self respondWithBody:res[@"body"] status:res[@"status"] contentType:res[@"contentType"] headers:res[@"headers"] handle:connectionHandle];
    } else {
        [self respondWithBody:@"Not found\n" status:@(404) contentType:@"text/plain" headers:@{} handle:connectionHandle];
    }
}

- (void)respondWithBody:(NSObject *)bodyObj status:(NSNumber *)status contentType:(NSString *)contentType headers:(NSDictionary<NSString *, NSString *> *)headers handle:(NSFileHandle *)connectionHandle
{
    NSData *bodyData=nil;
    if ([bodyObj isKindOfClass:[NSString class]]) {
        bodyData=[(NSString *)bodyObj dataUsingEncoding:NSUTF8StringEncoding];
        contentType=[contentType stringByAppendingString:@"; charset=utf-8"];
    }
    else if ([bodyObj isKindOfClass:[NSData class]]) {
        bodyData=(NSData *)bodyObj;
    }
    else {
        NMLogError(@"Bad bodyObj: %@", bodyObj);
        bodyData=[NSData data];
    }

    // create response message
    CFHTTPMessageRef response=CFHTTPMessageCreateResponse(kCFAllocatorDefault, [status integerValue], NULL, kCFHTTPVersion1_1);
    [headers enumerateKeysAndObjectsUsingBlock:^(NSString * _Nonnull key, NSString * _Nonnull val, BOOL * _Nonnull stop) {
        CFHTTPMessageSetHeaderFieldValue(response, (__bridge CFStringRef)key, (__bridge CFStringRef)val);
    }];
    CFHTTPMessageSetHeaderFieldValue(response, CFSTR("Content-Type"), (__bridge CFStringRef)contentType);
    CFHTTPMessageSetHeaderFieldValue(response, CFSTR("Content-Length"), (__bridge CFStringRef)[NSString stringWithFormat:@"%@", @(bodyData.length)]);
    CFHTTPMessageSetBody(response, (__bridge CFDataRef)bodyData);
    CFDataRef messageData = CFHTTPMessageCopySerializedMessage(response);
    @try
    {
        [connectionHandle writeData:(__bridge NSData *)messageData];
    }
    @catch (NSException *exception)
    {
        // Ignore the exception, it normally just means the client
        // closed the connection from the other end.
    }
    @finally
    {
        CFRelease(messageData);
        CFRelease(response);
    }
}

@end
