//
//  SBKConstants.h
//  Sensoro Beacon Kit
//
//  Created by Blankwonder on 8/23/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//


/**
 *  Constants to indicate radio transmit power level.
 */
typedef NS_ENUM(int, SBKBeaconTransmitPower) {
    /**
     *  The level is unknown.
     */
    SBKBeaconTransmitPowerUnknown = 0,
    /**
     *  Minimum transmit power level.
     */
    SBKBeaconTransmitPowerMin,
    /**
     *  Low transmit power level.
     */
    SBKBeaconTransmitPowerLow,
    /**
     *  Medium transmit power level. This is the default value.
     */
    SBKBeaconTransmitPowerMedium,
    /**
     *  High transmit power level.
     */
    SBKBeaconTransmitPowerHigh,
    /**
     *  Maximum transmit power level.
     */
    SBKBeaconTransmitPowerMax
};

#define SBKBeaconTransmitPowerDefault SBKBeaconTransmitPowerMedium

/**
 *  Constants to indicate advertising interval.
 */
typedef NS_ENUM(int, SBKBeaconAdvertisingInterval) {
    /**
     *  Unknown advertising interval.
     */
    SBKBeaconAdvertisingIntervalUnknown = 0xff,
    /**
     *  The advertising interval is 100ms.
     */
    SBKBeaconAdvertisingInterval_100 = 0x00,
    /**
     *  The advertising interval is 152.5ms.
     */
    SBKBeaconAdvertisingInterval_152_5 = 0x01,
    /**
     *  The advertising interval is 211.25ms.
     */
    SBKBeaconAdvertisingInterval_211_25 = 0x02,
    /**
     *  The advertising interval is 318.75ms.
     */
    SBKBeaconAdvertisingInterval_318_75 = 0x03,
    /**
     *  The advertising interval is 417.5ms.
     */
    SBKBeaconAdvertisingInterval_417_5 = 0x04,
    /**
     *  The advertising interval is 546.25ms.
     */
    SBKBeaconAdvertisingInterval_546_25 = 0x05,
    /**
     *  The advertising interval is 760ms.
     */
    SBKBeaconAdvertisingInterval_760 = 0x06,
    /**
     *  The advertising interval is 852.5ms.
     */
    SBKBeaconAdvertisingInterval_852_5 = 0x07,
    /**
     *  The advertising interval is 1022.5ms.
     */
    SBKBeaconAdvertisingInterval_1022_5 = 0x08,
    /**
     *  The advertising interval is 1285ms.
     */
    SBKBeaconAdvertisingInterval_1285 = 0x09
};

#define SBKBeaconAdvertisingIntervalDefault SBKBeaconAdvertisingInterval_417_5

/**
 *  Constants to indicate accelerometer sensitivity.
 */
typedef NS_ENUM(int, SBKBeaconAccelerometerSensitivity) {
    /**
     *  The accelerometer is unknown.
     */
    SBKBeaconAccelerometerSensitivityUnknown = 0,
    /**
     *  The accelerometer is disabled.
     */
    SBKBeaconAccelerometerSensitivityDisabled,
    /**
     *  The accelerometer sensitivity is low.
     */
    SBKBeaconAccelerometerSensitivityLow,
    /**
     *  The accelerometer sensitivity is medium.
     */
    SBKBeaconAccelerometerSensitivityMedium,
    /**
     *  The accelerometer sensitivity is high.
     */
    SBKBeaconAccelerometerSensitivityHigh
};

#define SBKBeaconAccelerometerSensitivityDefault SBKBeaconAccelerometerSensitivityDisabled

/**
 *  Constants to indicate connection status.
 */
typedef NS_ENUM(int, SBKBeaconConnectionStatus){
    /**
     *  The connection is disconnected.
     */
    SBKBeaconConnectionStatusDisconnected = 0,
    /**
     *  The connection is connecting.
     */
    SBKBeaconConnectionStatusConnecting,
    /**
     *  The connection is connected.
     */
    SBKBeaconConnectionStatusConnected
};

/**
 *  Constants to indicate authorization status.
 */
typedef NS_ENUM(int, SBKBeaconWritePermissionStatus){
    /**
     *  The authorization status is unknown.
     */
    SBKBeaconWritePermissionStatusUnknown = 0,
    /**
     *  This application is authorized to write value to the beacon.
     */
    SBKBeaconWritePermissionStatusAuthorized,
    /**
     *  This application is not authorized to write value to the beacon.
     */
    SBKBeaconWritePermissionStatusRestricted
};

/**
 *  Constants to indicate energy saving mode.
 */
typedef NS_OPTIONS(int, SBKBeaconEnergySavingMode) {
    /**
     *  Do not use any energy saving mode.
     */
    SBKBeaconEnergySavingModeNone = 0,
    /**
     *  Automatically reduce advertising frequency when ambient light level is dark.
     */
    SBKBeaconEnergySavingModeLightSensor = 1 << 0
};

