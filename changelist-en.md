4.1.2 Change List

1. Bug Fixes.

4.1.1 Change List

1. Add Support for SmartBeacon Pro (C1).

4.1.0 Change List

1. Add Support for firmware 4.0 and 4.1.
2. Parse out eddystone info from eddystone package.

4.0.0 Change List

1. SDK 4.0.0, Add support for firmware 4.0, you can use it to configuire device.
2. Add new verified password way,  you need implement `sensoroBeaconRequirePassword` method of delegate, and in this method, you use `requireWritePermissionWithPassword` to enter the password.
3.3.0 Change List

1. In this version SDK, you can get SN and battery info but iBeacon info when iOS device was locked.

3.2.3 Change List

1. You use `flashLightWithCommand:repeat:completion:` method to controle the LED on device
2. Fixes the bug that accuracy did not update occasionally.

3.2.1 Change List

1. Fixes the bug there is not light, temperature info when you enbale `Prevent Squatters`.

3.2.0 Change List

1. Add support for Security Broadcast Key with overdue info
2. Bug fixes。

3.1.0 Change List

1. Add support for C0, you set micro degree broadcast power.
2. Add cloud suppoort
