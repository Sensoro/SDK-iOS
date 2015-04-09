//
//  SBKBeaconManager.h
//  Sensoro Beacon Kit
//
//  Created by Blankwonder on 6/13/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBKBeacon.h"

@protocol SBKBeaconManagerDelegate;

/**
 *  The SBKBeaconManager class defines the interface for configuring the delivery of beacon-related events to your application. You use an instance of this class to get SBKBeacon objects, and establish the parameters that determine which beacon's events should be delivered.
 *
 *  You should always use the shared instance. Creating own instance is not allowed.
 */
@interface SBKBeaconManager : NSObject

/**---------------------------------------------------------------------------------------
 * @name Getting the Instance
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Returns the shared instance of the SBKBeaconManager class. Users are not allowed to create own instance.
 */
+ (SBKBeaconManager *)sharedInstance;

/**---------------------------------------------------------------------------------------
 * @name Setting and Getting the Delegate
 *  ---------------------------------------------------------------------------------------
 */

/**
 * The delegate of the app object.
 */
@property (nonatomic, weak) id <SBKBeaconManagerDelegate> delegate;

/**---------------------------------------------------------------------------------------
 * @name Initiating Beacon Ranging
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Requests permission to use location services whenever the app is running.
 *
 *  @discussion When the current authorization status is kCLAuthorizationStatusNotDetermined, calling this method prompts the user to grant permission to the app to use location services.The user prompt contains the text from the NSLocationAlwaysUsageDescription key in your app’s Info.plist file, and the presence of that key is required when calling this method. You must call this method or the requestWhenInUseAuthorization method prior to using location services. If the current authorization status is anything other than kCLAuthorizationStatusNotDetermined, this method does nothing.
 *  for detail [Apple's requestAlwaysAuthorization](https://developer.apple.com/library/ios/documentation/CoreLocation/Reference/CLLocationManager_Class/index.html#//apple_ref/occ/instm/CLLocationManager/requestAlwaysAuthorization)
 *
 */
- (void)requestAlwaysAuthorization;

/**
 *  Requests permission to use location services while the app is in the foreground.
 *
 *  When the current authorization status is kCLAuthorizationStatusNotDetermined, calling this method prompts the user to grant permission to the app to use location services. The user prompt contains the text from the NSLocationWhenInUseUsageDescription key in your app’s Info.plist file, and the presence of that key is required when calling this method. You must call this method or the requestAlwaysAuthorization method prior to using location services. If the current authorization status is anything other than kCLAuthorizationStatusNotDetermined, this method does nothing.
 *  for detail [Apple's requestWhenInUseAuthorization](https://developer.apple.com/library/ios/documentation/CoreLocation/Reference/CLLocationManager_Class/index.html#//apple_ref/occ/instm/CLLocationManager/requestWhenInUseAuthorization)
 *
 */
- (void)requestWhenInUseAuthorization;

/**
 *  Starts the delivery of notifications for beacons with specified id.
 *
 *  @param beaconID          Using SBKBeaconID object to identify the beacons.
 *  @param wakeUpApplication Wake up your application in background when those beacons being ranged.
 */
- (void)startRangingBeaconsWithID:(SBKBeaconID *)beaconID wakeUpApplication:(BOOL)wakeUpApplication;

/**
 *  Stops the delivery of notifications for beacons with specified id.
 *
 *  @param beaconID Using SBKBeaconID object to identify the beacons.
 */
- (void)stopRangingBeaconsWithID:(SBKBeaconID *)beaconID;

/**
 *  Stops the delivery of notifications for all beacons.
 */
- (void)stopRangingAllBeacons;

/**
 *  Set the secret info to decrypt the broadcast info.
 *
 *  @param secretInfo the secret info.
 */
- (BOOL)addBroadcastKey:(NSString *)secretInfo;

/**
 *  The set of SBKBeaconID currently being ranged.
 *
 *  @return The objects in the set are instances of the SBKBeaconID class
 */
- (NSSet *)rangedBeaconIDs;

/**---------------------------------------------------------------------------------------
 * @name Getting the Instance of Beacons
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Get the beacon instance with SBKBeaconID object.
 *
 *  @param beaconID Using SBKBeaconID object to identify the beacon you want.
 *
 *  @return Beacon instance.
 *
 *  @discussion This mehtod will always return a beacon instance even if the beacon has not been ranged. The beacon with same ID will only have one instance.
 *
 *  @warning The SBKBeaconID object must have major and minor properties.
 */
- (SBKBeacon *)beaconWithID:(SBKBeaconID *)beaconID;

/**
 *  Get the beacon instances in range now.
 *
 *  @return Beacon instances in array, sorted by accuracy.
 */
- (NSArray *)beaconsInRange;
/**
 *  Get all the beacon instances.
 *
 *  @return Beacon instances in array.
 */
- (NSArray *)allBeacons;

/**---------------------------------------------------------------------------------------
 * @name Configuration
 *  ---------------------------------------------------------------------------------------
 */

/**
 * Delay out of range notifications delivering.
 *
 * @discussion In order to prevent notifications delivering too frequently, beacon will not be marked out of range immediately. Default value is 8 seconds, means a beacon will be marked out of range if it can not be ranged in last 8 seconds.
 */
@property (readwrite, nonatomic) NSTimeInterval outOfRangeDelay;

@property (readonly, nonatomic) NSString* version;

- (void)setDebugModeActive:(BOOL)active;

@end

/**
 *  The SBKBeaconManagerDelegate protocol defines the methods used to receive beacon updates from a SBKBeaconManager object.
 */
@protocol SBKBeaconManagerDelegate <NSObject>

@optional

/**---------------------------------------------------------------------------------------
 * @name Responding to beacon ranging
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Tells the delegate that ranged a new beacon.
 *
 *  @param beaconManager The beacon manager object reporting the event.
 *  @param beacon        The beacon instance just be ranged.
 */
- (void)beaconManager:(SBKBeaconManager *)beaconManager didRangeNewBeacon:(SBKBeacon *)beacon;

/**
 *  Tells the delegate that a beacon has been out of range.
 *
 *  @param beaconManager The beacon manager object reporting the event.
 *  @param beacon        The beacon instance just be out of range.
 */
- (void)beaconManager:(SBKBeaconManager *)beaconManager beaconDidGone:(SBKBeacon *)beacon;

/**
 *  Tells the delegate that if one or more beacons are in range. This method will be called approximate every one second, even there is not beacon around.
 *
 *  @param beaconManager The beacon manager object reporting the event.
 *  @param beacons       An array of SBKBeacon objects representing the beacons currently in range. You can use the information in these objects to determine the range of each beacon and its identifying information.
 */
- (void)beaconManager:(SBKBeaconManager *)beaconManager scanDidFinishWithBeacons:(NSArray *)beacons;

/**
 *  Tells the delegate that the authorization status for the application changed.
 *
 *  @param beaconManager The beacon manager object reporting the event.
 *  @param status        The new authorization status for the application.
 *  @discussion This method is called whenever the application’s ability to use location services changes. Changes can occur because the user allowed or denied the use of location services for your application or for the system as a whole.
 */
- (void)beaconManager:(SBKBeaconManager *)beaconManager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;

/**
 * It is same with locationManager:didDetermineState:forRegion: of CLLocationManagerDelegate
 * Tells the delegate about the state of the specified region.
 *
 *  @param beaconManager The beacon manager object reporting the event.
 *  @param state The state of the specified region. For a list of possible values, see the SBKRegionState type.
 *  @param region The region whose state was determined.
 *
 *  @discussion see locationManager:didDetermineState:forRegion: of CLLocationManagerDelegate, When a app waked up by a region, 
 *  The system will call SDK, SDK will call this delegate method.
 */
- (void)beaconManager:(SBKBeaconManager *)beaconManager didDetermineState:(SBKRegionState) state forRegion:(SBKBeaconID*) region;


@end