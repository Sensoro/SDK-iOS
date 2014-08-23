//
//  SBKError.h
//  Sensoro Beacon Kit
//
//  Created by Blankwonder on 6/20/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  Indicates an error occurred in Sensoro Beacon Kit.
 */
extern NSString * const SBKErrorDomain;

/**
 *  Error codes for the Sensoro Beacon Kit error domain.
 */
enum {
    /**
     *  Indicates that an unknown or unexpected error occurred.
     */
    SBKErrorUnknownError = 0,

    /**
     *  The connection failed.
     */
    SBKErrorConnectionFailed = 10000,

    /**
     *  Unexpected disconnection occurred.
     */
    SBKErrorUnexpectedDisconnect = 10010,

    /**
     *  The attribute’s value cannot be written.
     */
    SBKErrorWriteNotPermitted = 11000,

    /**
     *  Authorization failed.
     */
    SBKErrorAuthorizationFailed = 12000
};