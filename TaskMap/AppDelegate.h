//
//  AppDelegate.h
//  TaskMap
//
//  Created by Paul on 2/12/15.
//  Copyright (c) 2015 Project One. All rights reserved.
//  허허 나는아인
//  두번째 시도!
//  세번째 시도!!
// 뭐야..ㅡㅡ

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

