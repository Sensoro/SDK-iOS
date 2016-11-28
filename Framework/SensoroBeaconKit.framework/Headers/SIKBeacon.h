//
//  SIKBeacon.h
//  Sensoro Beacon Kit
//
//  Created by Blankwonder on 6/12/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBKBeacon.h"

/**
 *  The SIKBeacon class defines the interface of a sensoro beacon device. You can use instances of this class to get rssi, sensor data or configurate device settings. You do not create instances of this class directly. Use SBKBeaconManager to get SBKBeacon instances.
 *
 *  The identity of a beacon is defined by its beaconID properties.
 */
@interface SIKBeacon : NSObject

/**---------------------------------------------------------------------------------------
 * @name SIKBeacon Properties
 *  ---------------------------------------------------------------------------------------
 */

/**
*  The beacon's name in SENSORO Cloud's App
*/
@property (readonly, nonatomic, copy) NSString * name;

/**
 *  The beacon's custom config infomation
 */
@property (readonly, nonatomic, strong) NSDictionary *metadata;

/**
 *  The beacon's identifier
 *  @discussion  also use beacon's UMM as it's identifier
 */
@property (readonly, nonatomic, copy) NSString * identifier;

/**
 *  The beacon's device data , is SBKBeacon object show beacon's infomation
 */
@property (readonly, nonatomic, strong) SBKBeacon * device;

@end
