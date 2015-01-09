//
//  SBKConstants.h
//  Sensoro Beacon Kit
//
//  Created by Blankwonder on 8/23/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//

/**
 *  Constants to indicate radio transmit power level.

 *  For Yunzi (A0):
    * SBKBeaconTransmitPowerMin,
    * SBKBeaconTransmitPowerMedium,
    * SBKBeaconTransmitPowerMax

 *  For Yunzi (B0):
    * SBKBeaconTransmitPowerLevel0
    * SBKBeaconTransmitPowerLevel1
    * SBKBeaconTransmitPowerLevel2
    * SBKBeaconTransmitPowerLevel3
    * SBKBeaconTransmitPowerLevel4
    * SBKBeaconTransmitPowerLevel5
    * SBKBeaconTransmitPowerLevel6
    * SBKBeaconTransmitPowerLevel7

 *  You also can set SBKBeaconTransmitPowerLevel0 ~ SBKBeaconTransmitPowerLevel7 to Yunzi (A0), In this case SBKBeaconTransmitPowerLevel0 is equal to SBKBeaconTransmitPowerMin, SBKBeaconTransmitPowerLevel7 is equal SBKBeaconTransmitPowerMax, other is equal SBKBeaconTransmitPowerMedium
 *  You also can set SBKBeaconTransmitPowerMin ~ SBKBeaconTransmitPowerMax to B0, In this case SBKBeaconTransmitPowerMin is equal SBKBeaconTransmitPowerLevel0, SBKBeaconTransmitPowerMax is equal SBKBeaconTransmitPowerLevel7. SBKBeaconTransmitPowerMedium is equal SBKBeaconTransmitPowerLevel4.
 */
typedef NS_ENUM(int, SBKBeaconTransmitPower) {
    /**
     *  The level is unknown.
     */
    SBKBeaconTransmitPowerUnknown = 0xff,
    
    /**
     *  power level Leve0.
     */
    SBKBeaconTransmitPowerLevel0 = 0x00,
    /**
     *  power level Leve1.
     */
    SBKBeaconTransmitPowerLevel1 = 0x01,
    /**
     *  power level Leve2.
     */
    SBKBeaconTransmitPowerLevel2 = 0x02,
    /**
     *  power level Leve3.
     */
    SBKBeaconTransmitPowerLevel3 = 0x03,
    /**
     *  power level Leve4.
     */
    SBKBeaconTransmitPowerLevel4 = 0x04,
    /**
     *  power level Leve5.
     */
    SBKBeaconTransmitPowerLevel5 = 0x05,
    /**
     *  power level Leve6.
     */
    SBKBeaconTransmitPowerLevel6 = 0x06,
    /**
     *  power level Leve7.
     */
    SBKBeaconTransmitPowerLevel7 = 0x07,
    
    /**
     *  Minimum transmit power level.
     */
    SBKBeaconTransmitPowerMin = SBKBeaconTransmitPowerLevel0,
    /**
     *  Low transmit power level.
     */
    SBKBeaconTransmitPowerLow = SBKBeaconTransmitPowerLevel2,
    /**
     *  Medium transmit power level. This is the default value.
     */
    SBKBeaconTransmitPowerMedium = SBKBeaconTransmitPowerLevel4,
    /**
     *  High transmit power level.
     */
    SBKBeaconTransmitPowerHigh = SBKBeaconTransmitPowerLevel6,
    /**
     *  Maximum transmit power level.
     */
    SBKBeaconTransmitPowerMax = SBKBeaconTransmitPowerLevel7
    
    
    
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
    SBKBeaconAccelerometerSensitivityUnknown = 0xff,
    /**
     *  The accelerometer is disabled.
     */
    SBKBeaconAccelerometerSensitivityDisabled = 0x00,
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
    SBKBeaconWritePermissionStatusUnknown = 0xff,
    /**
     *  This application is authorized to write value to the beacon.
     */
    SBKBeaconWritePermissionStatusAuthorized = 0x00,
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


/**
 *  Constants to indicate secure broadcast change interval.
 */
typedef NS_OPTIONS(int, SBKBeaconSecureBroadcastInterval) {
    /**
     *  THe secure broadcast is unknown.
     */
    SBKBeaconSecureBroadcastIntervalUnknown = -1,
    /**
     *  Do not use secure broadcast.
     */
    SBKBeaconSecureBroadcastIntervalNone = 0x00,
    /**
     *  The secure broadcast interval is 5s.
     */
    SBKBeaconSecureBroadcastInterval_5s = 0x01,
    /**
     *  The secure broadcast interval is 1 minute.
     */
    SBKBeaconSecureBroadcastInterval_1min = 0x02,
    /**
     *  The secure broadcast interval is 1 hour.
     */
    SBKBeaconSecureBroadcastInterval_1hour = 0x03,
    /**
     *  The secure broadcast interval is 1 day.
     */
    SBKBeaconSecureBroadcastInterval_1day = 0x04,
    /**
     *  The secure broadcast interval is a week.
     */
    SBKBeaconSecureBroadcastInterval_7days = 0x05,
    /**
     *  The secure broadcast interval is 30 days.
     */
    SBKBeaconSecureBroadcastInterval_30days = 0x06,
};

/**
 * Constants to indicate work model of a beacon.
 */
typedef NS_OPTIONS(int, SBKBeaconWorkMode) {
    /**
     *  THe work mode is unknown.
     */
    SBKBeaconWorkModeUnknown = -1,
    /**
     *  THe work model is mode 1 of a beacon B0 ( frimware version after 3.0 (include)) or A0
     */
    SBKBeaconWorkMode1 = 0x01,
    /**
     *  THe work mode is mode 2 of a beacon B0 ( frimware version after 3.0 (include)).
     */
    SBKBeaconWorkMode2 = 0x02,
    /**
     *  THe work mode is mode 3 of a beacon B0 ( frimware version after 3.0 (include)). or B0 (firmware version before 2.3 (include))
     */
    SBKBeaconWorkMode3 = 0x03,
    /**
     *  THe work mode is mode 4 of a beacon B0 ( frimware version after 3.0 (include)).
     */
    SBKBeaconWorkMode4 = 0x04,
};




