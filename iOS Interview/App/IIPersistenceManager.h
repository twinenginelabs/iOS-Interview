//
//  IIPersistenceManager.h
//  iOS Interview
//
//  Created by Nicholas Phillips on 11/19/14.
//  Copyright (c) 2014 Twin Engine Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MagicalRecord/CoreData+MagicalRecord.h>

@interface IIPersistenceManager : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (IIPersistenceManager *)sharedInstance;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
