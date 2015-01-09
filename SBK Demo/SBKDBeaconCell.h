//
//  SBKTBeaconCell.h
//  Sensoro Beacon Kit
//
//  Created by Blankwonder on 7/15/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SBKDBeaconCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *majorAndMinorLabel;
@property (nonatomic, strong) IBOutlet UILabel *UUIDLabel;
@property (nonatomic, strong) IBOutlet UILabel *detailLabel;

@property (nonatomic, strong) IBOutlet UIImageView *dotImageView;
@property (weak, nonatomic) IBOutlet UILabel *deviceInfo;
@property (weak, nonatomic) IBOutlet UILabel *sensorInfo;

@end
