## 4.3.0 Change List
`2019-06-06`

1. Support new hardware Model C7

## 4.2.0 Change List

1. Support firmware 4.4
2. Support new hardware Model C8

## 4.1.9 Change List

1. Enable bitcode.

## 4.1.8 Change List

1. Remove support to switch to standard eddystone mode.
2. Bug fixes.
3. Add Framework SDK in Framework.

## 4.1.7 Change List

1. Support firmware 3.3, provide double beacon broadcast.
2. Bug fixes

## 4.1.6 Change List

1. Provid a fucntion to change device to standard Eddsytone mode.

## 4.1.5 Change List

1. the SDK stop bluetooth scan when sdk stop all monitoring. Because if App require d the bluetooth-central background mode, when App stop scan, and enter the background, App should stop any scan to saving power, in prev version, this will not achieve. In current version, it is OK.

## 4.1.4 Change List

1. Fixed the issue that crash when monitored region include CLCircleRegion.
2. Fixed the issue that call connection callback in other queue than main queue when connect to 4.0 and later devcie.

## 4.1.3 Change List

1. Fixed the issue that bluetooth sanning is in main queue.
2. Fixed the issue that sdk start bluetooth scanning before bluetooth of iOS device is power on.

## 4.1.2 Change List

1. Bug Fixes.

## 4.1.1 Change List

1. Add Support for SmartBeacon Pro (C1).

## 4.1.0 Change List

1. Add Support for firmware 4.0 and 4.1.
2. Parse out eddystone info from eddystone package.

## 4.0.0 Change List

1. SDK 4.0.0, Add support for firmware 4.0, you can use it to configuire device.
2. Add new verified password way,  you need implement `sensoroBeaconRequirePassword` method of delegate, and in this method, you use `requireWritePermissionWithPassword` to enter the password.
 

## 3.3.0 Change List

1. In this version SDK, you can get SN and battery info but iBeacon info when iOS device was locked.

## 3.2.3 Change List

1. You use `flashLightWithCommand:repeat:completion:` method to controle the LED on device
2. Fixes the bug that accuracy did not update occasionally.

## 3.2.1 Change List

1. Fixes the bug there is not light, temperature info when you enbale `Prevent Squatters`.

## 3.2.0 Change List

1. Add support for Security Broadcast Key with overdue info
2. Bug fixes。

## 3.1.0 Change List

1. Add support for C0, you set micro degree broadcast power.
2. Add cloud suppoort
