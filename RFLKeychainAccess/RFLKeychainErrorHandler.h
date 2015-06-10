#import <Foundation/Foundation.h>

@class RFLKeychainAccess;

@protocol RFLKeychainErrorHandler <NSObject>

- (void)keychainAccess:(RFLKeychainAccess *)keychainAccess receivedError:(NSError *)error;

@end
