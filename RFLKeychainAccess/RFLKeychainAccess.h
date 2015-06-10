#import <Foundation/Foundation.h>
#import "RFLKeychainErrorHandler.h"
#import "RFLKeychainServices.h"
#import "RFLKeychainAccessAccessibility.h"

//! Project version number for LUKeychainAccess.
FOUNDATION_EXPORT double RFLKeychainAccessVersionNumber;

//! Project version string for LUKeychainAccess.
FOUNDATION_EXPORT const unsigned char RFLKeychainAccessVersionString[];

extern NSString *RFLKeychainAccessErrorDomain;

typedef NS_ENUM(NSInteger, RFLKeychainAccessError) {
  RFLKeychainAccessInvalidArchiveError
};

@interface RFLKeychainAccess : NSObject

@property (nonatomic, assign) RFLKeychainAccessAccessibility accessibilityState;
@property (nonatomic, strong) id<RFLKeychainErrorHandler> errorHandler;
@property (nonatomic, assign) NSString *service;

// Public Methods
+ (RFLKeychainAccess *)standardKeychainAccess;
- (BOOL)deleteAll;

// Getters
- (BOOL)boolForKey:(NSString *)key;
- (NSData *)dataForKey:(NSString *)key;
- (double)doubleForKey:(NSString *)key;
- (float)floatForKey:(NSString *)key;
- (NSInteger)integerForKey:(NSString *)key;
- (id)objectForKey:(NSString *)key;
- (NSString *)stringForKey:(NSString *)key;

// Setters
- (void)registerDefaults:(NSDictionary *)dictionary;
- (void)setBool:(BOOL)value forKey:(NSString *)key;
- (void)setData:(NSData *)data forKey:(NSString *)key;
- (void)setDouble:(double)value forKey:(NSString *)key;
- (void)setFloat:(float)value forKey:(NSString *)key;
- (void)setInteger:(NSInteger)value forKey:(NSString *)key;
- (void)setObject:(id)value forKey:(NSString *)key;
- (void)setString:(NSString *)inputString forKey:(NSString *)key;

@end
