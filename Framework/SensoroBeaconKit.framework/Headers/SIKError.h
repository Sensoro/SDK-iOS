//
//  SIKError.h
//  Sensoro Beacon Kit
//
//  Created by Blankwonder on 6/20/14.
//  Copyright (c) 2014 Sensoro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const SIKErrorDomain;
/**
 SIKError state code 
 */
enum {
    SIKErrorUnknownError = 0,
    SIKErrorUnauthorizedError = 401,
    SIKErrorNotFoundError = 404,
    
};