//
//  RSA.h
//  RSA
//
//  Created by WJchao on 2019/2/13.
//  Copyright © 2019 WJchao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RSA : NSObject


// return base64 encoded string
+ (NSString *)encryptString:(NSString *)str publicKey:(NSString *)pubKey;
// return raw data
+ (NSData *)encryptData:(NSData *)data publicKey:(NSString *)pubKey;
// return base64 encoded string
+ (NSString *)encryptString:(NSString *)str privateKey:(NSString *)privKey;
// return raw data
+ (NSData *)encryptData:(NSData *)data privateKey:(NSString *)privKey;

// decrypt base64 encoded string, convert result to string(not base64 encoded)
+ (NSString *)decryptString:(NSString *)str publicKey:(NSString *)pubKey;
+ (NSData *)decryptData:(NSData *)data publicKey:(NSString *)pubKey;
+ (NSString *)decryptString:(NSString *)str privateKey:(NSString *)privKey;
+ (NSData *)decryptData:(NSData *)data privateKey:(NSString *)privKey;




/**
 *  SHA1+RSA 签名
 *
 *  @return string
 */
+ (NSString *)signSHA1WithRSA:(NSString *)plainText;
+ (NSString *)sign:(NSString *)content withPriKey:(NSString *)priKey;

/**
 *  SHA1+RSA 验签
 *
 *  @return bool
 */
+ (BOOL)verifySHA1WithRSA:(NSString *)plainString signature:(NSString *)signatureString;
+ (BOOL)verify:(NSString *)content signature:(NSString *)signature withPublivKey:(NSString *)publicKey;



@end

NS_ASSUME_NONNULL_END
