//
//  SBKDViewController.m
//  SBK Demo
//
//  Created by Blankwonder on 7/18/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//

#import "SBKDViewController.h"
#import "SBKBeaconManager.h"
#import "SBKDBeaconCell.h"
#import "SBKUnitConvertHelper.h"

@interface SBKDViewController () <SBKBeaconManagerDelegate> {
    NSArray *_UUIDs;
    NSMutableArray *_beacons;
}

@end

static NSString *CellIdentifier = @"SBKDBeaconCell";

@implementation SBKDViewController

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        _beacons = [NSMutableArray array];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    self.navigationItem.title = @"Sensoro Beacon Kit Demo";

    [self.tableView registerNib:[UINib nibWithNibName:CellIdentifier bundle:nil]
         forCellReuseIdentifier:CellIdentifier];
    self.tableView.rowHeight = 142;
    self.tableView.allowsSelection = NO;
    
    UILabel * label = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 50, 44)];
    label.text = [SBKBeaconManager sharedInstance].version;
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:[SBKBeaconManager sharedInstance].version
                                                                              style:UIBarButtonItemStylePlain
                                                                             target:self
                                                                             action:nil];
    
    [SBKBeaconManager sharedInstance].delegate = self;
}

- (void)beaconManager:(SBKBeaconManager *)beaconManager didRangeNewBeacon:(SBKBeacon *)beacon {
    [_beacons addObject:beacon];
    NSLog(@"Enter new beacon %@, SN:%@",beacon.beaconID.stringRepresentation,beacon.serialNumber);
    [self.tableView insertRowsAtIndexPaths:@[[NSIndexPath indexPathForRow:_beacons.count - 1 inSection:0]]
                          withRowAnimation:UITableViewRowAnimationFade];
}

- (void)beaconManager:(SBKBeaconManager *)beaconManager beaconDidGone:(SBKBeacon *)beacon {
    [_beacons removeObject:beacon];
    NSLog(@"Leave a beacon %@, SN:%@",beacon.beaconID.stringRepresentation,beacon.serialNumber);
    
    if (_beacons.count < [self.tableView numberOfRowsInSection:0]) {
        [self.tableView deleteRowsAtIndexPaths:@[[NSIndexPath indexPathForRow:_beacons.count inSection:0]]
                              withRowAnimation:UITableViewRowAnimationFade];
    }
}

- (void)beaconManager:(SBKBeaconManager *)beaconManager scanDidFinishWithBeacons:(NSArray *)beacons {
    [self.tableView reloadRowsAtIndexPaths:[self.tableView indexPathsForVisibleRows] withRowAnimation:UITableViewRowAnimationNone];
    //NSLog(@"Times call");
}

#pragma mark - Table view data source

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return _beacons.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    SBKDBeaconCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier forIndexPath:indexPath];

    SBKBeacon *beacon = _beacons[indexPath.row];
    cell.majorAndMinorLabel.text = [NSString stringWithFormat:@"%04X-%04X ", beacon.beaconID.major.intValue, beacon.beaconID.minor.intValue];
    cell.UUIDLabel.text = beacon.beaconID.proximityUUID.UUIDString;
    cell.detailLabel.text = [NSString stringWithFormat:@"Model: %@, RSSI: %d, accuracy : %f",
                             beacon.hardwareModelName ?: @"Unknown",
                             (int)beacon.rssi,beacon.accuracy];

    cell.deviceInfo.text = [NSString stringWithFormat:@"hardware: %@ firmware %@",
                            beacon.hardwareModelName,beacon.firmwareVersion];

    cell.sensorInfo.text = [NSString stringWithFormat:@"Temp.:%@ Light:%@ Tx : %@",
                            beacon.temperature,beacon.light, [SBKUnitConvertHelper transmitPowerToString:beacon]];
    
    if (beacon.eddystoneNID == nil) {
        cell.eddystoneUID.text = @"N/A";
    }else{
        NSMutableData * data = [NSMutableData dataWithData:beacon.eddystoneNID];
        [data appendData:beacon.eddystoneBID];
        cell.eddystoneUID.text = [NSString stringWithFormat:@"UID :%@", data];
    }

    if (beacon.eddystoneNID == nil) {
        cell.eddystoneURL.text = @"N/A";
    }else{
        cell.eddystoneUID.text = [NSString stringWithFormat:@"URL :%@", beacon.eddystoneUrl];
    }
    
    if (beacon.inRange) {
        if (beacon.proximity != CLProximityUnknown) {
            [cell.dotImageView setImage:[UIImage imageNamed:@"dot_green"]];
        } else {
            [cell.dotImageView setImage:[UIImage imageNamed:@"dot_yellow"]];
        }
    } else {
        [cell.dotImageView setImage:[UIImage imageNamed:@"dot_red"]];
    }

    return cell;
}

@end
