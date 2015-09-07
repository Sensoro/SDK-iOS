//
//  SIKUser.h
//  Sensoro Intelligence Kit
//
//  Created by Blankwonder on 6/25/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  SIKUserGender type
 */
typedef NS_ENUM(NSInteger, SIKUserGender){
    /**
     *  Unknown
     */
    SIKUserGenderUnknown,
    /**
     *  Male
     */
    SIKUserGenderMale,
    /**
     *  Female
     */
    SIKUserGenderFemale
};


/**
 *  SENSOROCloud supported SNS Platform types currently
 */
typedef NS_ENUM(NSInteger, SIKUserSNSType){
    /// weibo
    SIKUserSNSTypeWeibo,
  
    /// weChat
    SIKUserSNSTypeWeChat,
    
    /// Twitter
    SIKUserSNSTypeTwitter,
   
    /// Facebook
    SIKUserSNSTypeFacebook
};


/*!
 A SENSORO Cloud Framework User Object that is a local representation of a user persisted to the SENSORO Cloud.
 It is the functionality of SENSORO Analysis, It synchronize data to the cloud automatically, also support SNS platform like weibo、weChat、Twitter、Facebook
 */
@interface SIKUser : NSObject

/**---------------------------------------------------------------------------------------
 * @name SIKUser Properties
 *  ---------------------------------------------------------------------------------------
 */


/**
 *  The unique identifier for the SIKUser
 * 
 *  The identifier is created when user first launch app, or retrieve identifier from PersistentStore
 */
@property (nonatomic, copy) NSString *identifier;

/// The name for the SIKUser.
@property (nonatomic, copy) NSString *name;

/// The email for the SIKUser.
@property (nonatomic, copy) NSString *email;

/// The gender for the SIKUser.
@property (nonatomic, assign) SIKUserGender gender;

/// The avatar's URL  for the SIKUser.
@property (nonatomic, copy) NSString *avatarURL;


/**---------------------------------------------------------------------------------------
 * @name SIKUser Tags
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Add SIKUser tags
 *
 *  @param tags to add SIKUser's tags contents
 */
- (void)addUserTags:(NSArray *)tags;

/**
 *  Remove SIKUser tags
 *
 *  @param tags to remove SIKUser's tags contents
 */
- (void)removeUserTags:(NSArray *)tags;

/**
 *  The tags for SIKUser
 *
 *  @return  SIKUser's tags contents
 */
- (NSArray *)userTags;

/// Remove SIKUser all tags
- (void)removeAllUserTags;


/**---------------------------------------------------------------------------------------
 * @name SIKUser SNS
 *  ---------------------------------------------------------------------------------------
 */


/**
 *  Set SIKUser SocialNetwork Infomation
 *
 *  @param userId         userId
 *  @param displayName    displayName
 *  @param additionalInfo additional Infomation
 *  @param platform       platform type
 */
- (void)setSocialNetowrkInfoWithUserId:(NSString *)userId
                           displayName:(NSString *)displayName
                        additionalInfo:(NSDictionary *)additionalInfo
                           forPlatform:(SIKUserSNSType)platform;

/**
 *  Fetch specified SNSPlatform  info
 *
 *  @param platform SNSPlatform type
 *
 *  @return SIKUser's specified SNSPlatform info
 */
- (NSDictionary *)SNSInfoForPlatform:(SIKUserSNSType)platform;

@end
