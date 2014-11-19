//
//  IIAPIHTTPClient.h
//  iOS Interview
//
//  Created by Nicholas Phillips on 11/19/14.
//  Copyright (c) 2014 Twin Engine Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MagicalRecord/CoreData+MagicalRecord.h>

#define API_URL @"http://api.interview.twinenginelabs.com"

@interface IIAPIHTTPClient : NSObject

+ (IIAPIHTTPClient *)sharedInstance;

@end
