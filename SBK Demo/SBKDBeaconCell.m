//
//  SBKTBeaconCell.m
//  Sensoro Beacon Kit
//
//  Created by Blankwonder on 7/15/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//

#import "SBKDBeaconCell.h"

@implementation SBKDBeaconCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)awakeFromNib
{
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
