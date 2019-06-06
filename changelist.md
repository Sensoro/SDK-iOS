## 4.3.0 Change List
`2019-06-06`

1. 支持新设备，Model C7

## 4.2.0 Change List

1. 支持固件 4.4
2. 支持新的硬件 Model C8

## 4.1.9 Change List

1. 开启 Bitcode 模式.

## 4.1.8 Change List

1. 删除切换到标准Eddystone模式的支持
2. 修复Bug
3. 添加Framework形式的SDK

## 4.1.7 Change List

1. 支持3.3固件，提供双Beacon支持。
2. 修复Bug

## 4.1.6 Change List

1. 添加方法，使用户可以通过 API 调用的形式，切换设备到纯 Eddystone 模式

## 4.1.5 Change List

1. 在停止扫描Beacon时，同时停止蓝牙扫描。如果用户开启了蓝牙后台模式，在停止扫描时，如果不停止蓝牙，会导致App持续在后台运行，消耗电量。

## 4.1.4 Change List

1. 修正系统中验证区域时，出现CLCircleRegion时，Crash的问题
2. 修正连接4.1的蓝牙设备成功时，connect回调在非主线程中调用的问题。

## 4.1.3 Change List

1. 修正蓝牙扫描在主线程进行的问题。
2. 修正蓝牙未打开的情况下，开始扫描出现的错误提示。

## 4.1.2 Change List

1. Bug 修正。

## 4.1.1 Change List

1. 替换为SDK 4.1.1，以提供对云盒 Pro (C1) 的支持。

## 4.1.0 Change List

1. 提供对云子4.0固件的支持。
2. 可以解析 Eddystone 的广播信息

## 4.0.0 Change List

1. SDK 4.0.0, 提供对固件4.0的支持。可以进行配置。
2. 使用了新的密码认证方式，原来在连接成功后，设定密码，现在添加回调函数，在回调函数中，设定密码。

## 3.3.0 Change List

1. SDK 3.3.0，支持在闭屏情况下，发现Sensoro的设备。

## 3.2.3 Change List

1. 加入LED灯控制功能。
2. 修正偶尔出现的beacon的accuracy没有更新的情况。

## 3.2.1 Change List

1. 修正加密时，没有光线，温度等传感器信息的问题

## 3.2.0 Change List

1. 添加密钥超期支持。
2. BugFix。

## 3.1.0 Change List

1. C0硬件支持，包括发现，及微距档位支持。
2. 添加云端收集的支持。

## 3.0.0 Change List

1. 3.0的硬件支持。
2. 删除SBKBeaconManager中的disableAdvancedFeatures属性，不允许用户关闭蓝牙扫描功能。
3. 在Major和Minor中添加0x来标示16进制，
4. 在状态页面中添加major和minor。

## 2.0 Change List

1. 添加UMM变化对应，在B0的硬件中，2.3以上固件版本中，可以关闭或者开启，并设定UMM变化的时间间隔。
2. 可以在前台扫描小云子的SN，电量等信息。
3. 代理调用机制优化
4. Bug修正
5. 文档更新
