//
//  HttpServer.h
//
//  Created by Nicholas Moore on 20/09/2022.
//
//  Added to difftastic test suite by the author.
//  This source file is released by the author into the public domain.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSDictionary *_Nullable(^PopHttpRequestHandler)(NSURL *url, NSString *method, NSDictionary *headers, NSData *body);

@interface PopHttpServer : NSObject
@property (readonly) uint16_t port;
@property (readonly) NSString *lastError;
@property (readonly, getter=isListening) BOOL listening;
- (id)initWithPort:(uint16_t)port;
- (BOOL)start;
- (void)stop;
- (void)registerHandler:(NSString *)pathPrefix block:(PopHttpRequestHandler)myblock;
@end

NS_ASSUME_NONNULL_END
