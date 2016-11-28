//
//  SIKManager.h
//  Sensoro Intelligence Kit
//
//  Created by Blankwonder on 6/25/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "SIKBeaconManager.h"
#import "SIKUser.h"
#import "SIKError.h"


/// the block as a callback when app fetch SENSOROCloud configs from remote
typedef void (^SIKManagerCompletionBlock)(BOOL succeeded, NSError *error);

/**
 *  The SIKManager class defines the interface for connecting to SENSORO Cloud to your application. You use an instance of this class to get SIKUser objects, and reset an instance of this class data;
 *  You should always use the shared instance. Creating own instance is not allowed.
 */
@interface SIKManager : NSObject

/**
*  SIKManager instance, Users are not allowed to create own instance.
*
*  @return  the shared instance of the SIKManager class.
*/
+ (instancetype)sharedInstance;


/**---------------------------------------------------------------------------------------
 * @name Initiating Beacon Ranging
 *  ---------------------------------------------------------------------------------------
 */


/**
 *  Sets the applicationId and clientKey of your application.
 *
 *  @param applicationKey The applicaiton key for your SENSORO Cloud application.
 *  @param secret         Sets the secret  of your SENSORO Cloud application.
 */
- (void)setApplicationKey:(NSString *)applicationKey
                   secret:(NSString *)secret;



/**
 *  set monitorBackgoundMode, in backgroundMode, In Appdelegate didFinishLaunchingWithOptions method should  add
 *  
 *  @param enable   support backgroundMode or not
 */
- (void)monitorRangionInBackgroundTask:(BOOL)enable;

/**
 *  Stop monitor rangion for SIKManager, just stop monitor beacons in your account
 */
- (void)stopMonitorRangion;

/**
 *  callback for SIKManager, when fetch data from SENSOROCloud completely, the block should have the following argument signature: (BOOL succeeded, NSError *error)
 */
@property (nonatomic, copy) SIKManagerCompletionBlock complete;


/**
 *  Current SIKBeacons in SENSOROCloud
 *
 *  @return current SIKBeacons
 */
- (NSDictionary *)currentBeacons;


/**---------------------------------------------------------------------------------------
 * @name SIKManager SIKUser
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Accessing the Current User,Gets the currently logged in user from memory and returns an instance of it.
 *
 *  @return a SIKUser that is the currently logged in user. If there is none, returns nil.
 */
+ (SIKUser *)currentUser;

/**
 *  Reset user's data to initial value
 */
+ (void)resetUser;



/**---------------------------------------------------------------------------------------
 * @name SIKManager Debug
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  SIK release version
 *
 *  @return version String
 */
+ (NSString*) version;

/**
 *  SIK debug build version
 *
 *  @return build version String
 */
+ (NSUInteger) buildVersion;

/**
 *  DebugMode
 *
 *  @param active enable Debug
 */
+ (void)setDebugModeActive:(BOOL)active;

@end
