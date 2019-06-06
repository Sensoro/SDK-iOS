//
//  SBKDAppDelegate.m
//  SBK Demo
//
//  Created by Blankwonder on 7/18/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//

#import "SBKDAppDelegate.h"
#import "SBKBeaconManager.h"
#import "SBKDViewController.h"

@implementation SBKDAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    SBKBeaconID *beaconID = [SBKBeaconID beaconIDWithProximityUUID:SBKSensoroDefaultProximityUUID];
    [[SBKBeaconManager sharedInstance] startRangingBeaconsWithID:beaconID
                                               wakeUpApplication:YES];
    
    SBKBeaconID *beaconIDWeChat = [SBKBeaconID beaconIDWithProximityUUID:[[NSUUID alloc] initWithUUIDString:@"FDA50693-A4E2-4FB1-AFCF-C6EB07647825"]];
    [[SBKBeaconManager sharedInstance] startRangingBeaconsWithID:beaconIDWeChat
                                               wakeUpApplication:YES];

    [[SBKBeaconManager sharedInstance] requestAlwaysAuthorization];
    //[[SBKBeaconManager sharedInstance] requestWhenInUseAuthorization];
    
    //测试用防蹭用密钥，期限到2016-01-01
//    [[SBKBeaconManager sharedInstance] addBroadcastKey:@"01Y2GLh1yw3+6Aq0RsnOQ8xNvXTnDUTTLE937Yedd/DnlcV0ixCWo7JQ+VEWRSya80yea6u5aWgnW1ACjKNzFnig=="];
    [[SBKBeaconManager sharedInstance] addBroadcastKey:@"01vZbPnOagiRTVFVRjOusaWLqhIw4jVmVRI3a4w2T+qTGhaCyvRKHhYBK7RDSPFXYOtJvReQjZutDtnDMmIHO0RA=="];

    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.backgroundColor = [UIColor whiteColor];
    self.window.rootViewController = [[UINavigationController alloc] initWithRootViewController:[[SBKDViewController alloc] initWithStyle:UITableViewStylePlain]];
    [self.window makeKeyAndVisible];


    //[UIApplication sharedApplication].applicationIconBadgeNumber = 0;
    
    return YES;
}
							
- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    
    
    NSLog(@"applicationWillTerminate");
}

@end
