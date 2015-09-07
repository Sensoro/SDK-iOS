//
//  SBKUnitConvertHelper.h
//  Sensoro Beacon Kit
//
//  Created by David Yang on 14/12/26.
//  Copyright (c) 2014年 Sensoro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBKConstants.h"

@class SBKBeacon;

/**
 *  The SBKUnitConvertHelper class is a utitlity tool class to help developer to convert enum to a readable text
 *  or value.
 *
 */
@interface SBKUnitConvertHelper : NSObject

/**
 *  Get the radius of beacon's region, unit is meter.
 *
 *  @param beacon which beacon.
 *
 *  @return the radius of region, unit is meter.
 */
+ (float) rangeRadiusOfBeacon: (SBKBeacon *) beacon;

/**
 *  Get transmit power of beacon, unit is dBm.
 *
 *  @param beacon which beacon.
 *
 *  @return transmit power of beacon.
 */
+ (short) transmitPowerToRawValue: (SBKBeacon *) beacon;

/**
 *  Get broadcast interval of beacon, unit is ms.
 *
 *  @param beacon which beacon.
 *
 *  @return broadcast interval of beacon.
 */
+ (float) frequencyToRawValue: (SBKBeacon *) beacon;

/**
 *  Get descripton of transmit power of beacon.
 *
 *  @param beacon which beacon.
 *
 *  @return descripton of transmit power of beacon.
 */
+ (NSString*) transmitPowerToString: (SBKBeacon *) beacon;

/**
 *  Get description of broadcast interval of beacon.
 *
 *  @param beacon which beacon.
 *
 *  @return description of broadcast interval of beacon.
 */
+ (NSString*) frequencyToString: (SBKBeacon *) beacon;

/**
 *  Flag to indicator whether the beacon use micro antenna.
 *
 *  @param beacon which beacon.
 *
 *  @return YES : use micro antenna, NO : use normal antenna.
 */
+ (BOOL)isMicroTX:(SBKBeacon *) beacon;

/**
 *  Convert a url to eddystone encode data.
 *
 *  @param url url to convert.
 *
 *  @return nil : failed, otherwise : OK.
 */
+ (NSData*)urlToEddystoneEncodeURL:(NSString*) url;


@end
