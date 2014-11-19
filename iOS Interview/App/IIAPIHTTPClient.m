//
//  IIAPIHTTPClient.m
//  iOS Interview
//
//  Created by Nicholas Phillips on 11/19/14.
//  Copyright (c) 2014 Twin Engine Labs. All rights reserved.
//

#import "IIAPIHTTPClient.h"
#import "IIPersistenceManager.h"

@implementation IIAPIHTTPClient

+ (IIAPIHTTPClient *)sharedInstance {
    static dispatch_once_t pred;
    static IIAPIHTTPClient * sharedInstance = nil;
    dispatch_once(&pred, ^{
        sharedInstance = [[IIAPIHTTPClient alloc] init];
    });
    
    return sharedInstance;
}

@end
