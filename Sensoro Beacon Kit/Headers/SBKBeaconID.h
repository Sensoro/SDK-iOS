//
//  SBKBeaconID.h
//  Sensoro Beacon Kit
//
//  Created by Blankwonder on 6/13/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

extern NSUUID * SBKSensoroDefaultProximityUUID;

/**
 *  SBKBeaconID instance is an obejct to specify a beacon’s identity. The proximityUUID property will never be nil, major and minor are optional.
 */


@interface SBKBeaconID : NSObject <NSCopying>

/**---------------------------------------------------------------------------------------
 * @name Initializing the Beacon ID
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Initializes and returns a SBKBeaconID object that targets a beacon with the specified proximity ID
 *
 *  @param proximityUUID The unique ID of the beacons being targeted. This value must not be nil.
 *
 *  @return An initialized SBKBeaconID object.
 */
+ (instancetype)beaconIDWithProximityUUID:(NSUUID *)proximityUUID;

/**
 *  Initializes and returns a SBKBeaconID object that targets a beacon with the specified proximity ID
 *
 *  @param proximityUUID The unique ID of the beacons being targeted. This value must not be nil.
 *  @param major The major value that you use to identify one or more beacons.
 *
 *  @return An initialized SBKBeaconID object.
 */
+ (instancetype)beaconIDWithProximityUUID:(NSUUID *)proximityUUID major:(CLBeaconMajorValue)major;

/**
 *  Initializes and returns a SBKBeaconID object that targets a beacon with the specified proximity ID
 *
 *  @param proximityUUID The unique ID of the beacons being targeted. This value must not be nil.
 *  @param major The major value that you use to identify one or more beacons.
 *  @param minor The minor value that you use to identify a specific beacon.
 *
 *  @return An initialized SBKBeaconID object.
 */
+ (instancetype)beaconIDWithProximityUUID:(NSUUID *)proximityUUID major:(CLBeaconMajorValue)major minor:(CLBeaconMinorValue)minor;

/**---------------------------------------------------------------------------------------
 * @name Comparing Beacon IDs
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Returns a Boolean value that indicates whether the receiver and a given beacon id are equal.
 *
 *  @param aBeaconID The beacon id with which to compare the receiver.
 *
 *  @return YES if the receiver and aBeaconID are equal, otherwise NO.
 */
- (BOOL)isEqualToBeaconID:(SBKBeaconID *)aBeaconID;

/**---------------------------------------------------------------------------------------
 * @name Accessing the Attributes
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  The unique ID of the beacons being targeted. (read-only)
 */
@property (readonly, nonatomic) NSUUID *proximityUUID;

/**
 *  The value identifying a group of beacons. (read-only)
 */
@property (readonly, nonatomic) NSNumber *major;

/**
 *  The value identifying a specific beacon within a group. (read-only)
 */
@property (readonly, nonatomic) NSNumber *minor;

/**---------------------------------------------------------------------------------------
 * @name Bridge to Core Bluetooth
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Convert a SBKBeaconID object to a CLBeaconRegion object.
 *
 *  @return A CLBeaconRegion object.
 */
- (CLBeaconRegion *)CLBeaconRegion;

/**
 *  Convert a CLBeaconRegion object to a SBKBeaconID object.
 *
 *  @param region A CLBeaconRegion object.
 *
 *  @return A SBKBeaconID object.
 */
+ (instancetype)beaconIDFromCLBeaconRegion:(CLBeaconRegion *)region;

/**---------------------------------------------------------------------------------------
 * @name Bridge to String
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Returns a string representation of the receiver.
 *
 *  @return The string representation of the receiver.
 */
- (NSString *)stringRepresentation;

/**
 *  Initializes and returns a SBKBeaconID object provided in a string representation.
 *
 *  @param string A string that is in one of the formats returned by the stringRepresentation method.
 *
 *  @return An initialized SBKBeaconID object.
 */
+ (instancetype)beaconIDWithString:(NSString *)string;

@end
