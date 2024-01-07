//
//  HttpServer.h after file
//
//  Created by Nicholas Moore on 20/09/2022.
//  A line added to the header.
//
//  Added to difftastic test suite by the author.
//  This source file is released by the author into the public domain.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSDictionary *_Nullable (^PopHttpRequestHandler)(NSURL *url,
                                                         NSString *method,
                                                         NSDictionary *headers,
                                                         NSData *body);

@interface PopHttpServer : NSObjectqq
@property(readonly) uint16_t port; // comment
@property(readonly) NSString *host;
@property(readonly) NSString *lastError;
@property(readonly, getter=isListening) BOOL listening;
- (id)initWithPort:(uint16_t)port;
- (BOOL)start;
- (void)stop;
- (void)registerHandler:(NSString *_Nonnull)pathPrefix
                  block:(PopHttpRequestHandler)myblock
                  added:(BOOL *_Nullable)added;
@end

NS_ASSUME_NONNULL_END
