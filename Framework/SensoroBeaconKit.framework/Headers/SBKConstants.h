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
    * SBKBeaconTransmitPowerLevel0, instead of SBKBeaconTransmitPowerMin
    * SBKBeaconTransmitPowerLevel1, instead of SBKBeaconTransmitPowerMedium
    * SBKBeaconTransmitPowerLevel2, instead of SBKBeaconTransmitPowerMax

 *  For Yunzi (B0):
    * SBKBeaconTransmitPowerLevel0
    * SBKBeaconTransmitPowerLevel1
    * SBKBeaconTransmitPowerLevel2
    * SBKBeaconTransmitPowerLevel3
    * SBKBeaconTransmitPowerLevel4
    * SBKBeaconTransmitPowerLevel5
    * SBKBeaconTransmitPowerLevel6
    * SBKBeaconTransmitPowerLevel7
 
 *  For Yunzi (C0 double Antenna):
    * SBKBeaconTransmitPowerLevel0
    * SBKBeaconTransmitPowerLevel1
    * SBKBeaconTransmitPowerLevel2
    * SBKBeaconTransmitPowerLevel3
    * SBKBeaconTransmitPowerLevel4
    * SBKBeaconTransmitPowerLevel5
    * SBKBeaconTransmitPowerLevel6
    * SBKBeaconTransmitPowerLevel7
    * SBKBeaconTransmitPowerLevel8
    * SBKBeaconTransmitPowerLevel9
    * SBKBeaconTransmitPowerLevel10
    * SBKBeaconTransmitPowerLevel11

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
     *  power level Leve8.
     */
    SBKBeaconTransmitPowerLevel8 = 0x08,
    /**
     *  power level Leve9.
     */
    SBKBeaconTransmitPowerLevel9 = 0x09,
    /**
     *  power level Leve10.
     */
    SBKBeaconTransmitPowerLevel10 = 0x0A,
    /**
     *  power level Leve11.
     */
    SBKBeaconTransmitPowerLevel11 = 0x0B,
};

#define SBKBeaconTransmitPowerDefault SBKBeaconTransmitPowerLevel2

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
     *  The work mode is unknown.
     */
    SBKBeaconWorkModeUnknown = -1,
    /**
     *  The work model is mode 1 of a beacon B0 ( frimware version after 3.0 (include)) or A0
     */
    SBKBeaconWorkMode1 = 0x01,
    /**
     *  The work mode is mode 2 of a beacon B0 ( frimware version after 3.0 (include)).
     */
    SBKBeaconWorkMode2 = 0x02,
    /**
     *  The work mode is mode 3 of a beacon B0 ( frimware version after 3.0 (include)). or B0 (firmware version before 2.3 (include))
     */
    SBKBeaconWorkMode3 = 0x03,
    /**
     *  The work mode is mode 4 of a beacon B0 ( frimware version after 3.0 (include)).
     */
    SBKBeaconWorkMode4 = 0x04,
};

/**
 * Common command to flash the light. In comment belllow, '-' is on and '_' is off, one bit countinue 0.5s.
 * 
 * You can use repeat parameter of 'flashLightWithCommand:repeat:completion:' to replay the command.
 */
typedef NS_OPTIONS(u_int8_t, SBKCommonLigthFlashCommand) {
    /**
     *  -_-_-_-_
     */
    SBKCommonFlashLightCommand_Normal = 0xAA,
    /**
     *  --__--__
     */
    SBKCommonFlashLightCommand_22 = 0xCC,
    /**
     *  -___-___
     */
    SBKCommonFlashLightCommand_13 = 0x88,
    /**
     *  ---_---_
     */
    SBKCommonFlashLightCommand_31 = 0xEE,
    /**
     *  ----____
     */
    SBKCommonFlashLightCommand_40 = 0xF0,
    /**
     *  -----___
     */
    SBKCommonFlashLightCommand_53 = 0xF8
};

/**
 *    Report the state for region.
 */
typedef NS_ENUM(int, SBKRegionState) {
    /**
     *  the state was unknown.
     */
    SBKRegionStateUnknown,
    /**
     *  enter a region.
     */
    SBKRegionStateEnter,
    /**
     *  leave a region.
     */
    SBKRegionStateLeave
};

/**
 *    Package type for Eddystone.
 */
typedef NS_ENUM(int, EddystonePackageType) {
    /**
     *  Eddystone UID package.
     */
    EDDYSTONE_PACKAGE_UID = 0,
    /**
     *  Eddystone URL package.
     */
    EDDYSTONE_PACKAGE_URL = 1,
    /**
     *  Eddystone TLM package.
     */
    EDDYSTONE_PACKAGE_TLM = 2
};

/**
 *    The interval of eddystone's TLM package.
 */
typedef NS_ENUM(int8_t, EddystoneTLMInterval) {
    
    /**
     *  unknown type.
     */
    EDDYSTONE_TLM_INTERVAL_UNKNOWN = -1,
    
    /**
     *  broadcast a eddystone TLM package per UID or URL package.
     */
    EDDYSTONE_TLM_INTERVAL_OnePerOne = 0x00,
    /**
     *  broadcast a eddystone TLM package per five UID or URL package.
     */
    EDDYSTONE_TLM_INTERVAL_OnePerFive = 0x01,
    /**
     *  broadcast a eddystone TLM package per ten UID or URL package.
     */
    EDDYSTONE_TLM_INTERVAL_OnePerTen = 0x02,
    /**
     *  broadcast a eddystone TLM package per hundred UID or URL package.
     */
    EDDYSTONE_TLM_INTERVAL_OnePerHundred = 0x03
};




