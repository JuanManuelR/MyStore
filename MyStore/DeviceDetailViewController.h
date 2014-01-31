//
//  DeviceDetailViewController.h
//  MyStore
//
//  Created by Juan Manuel on 1/29/14.
//  Copyright (c) 2014 Home. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DeviceDetailViewController : UIViewController

@property (nonatomic, weak) IBOutlet UITextField *nameTextField;
@property (nonatomic, weak) IBOutlet UITextField *versionTextField;
@property (nonatomic, weak) IBOutlet UITextField *companyTextField;

@property (strong) NSManagedObject *device;

-(IBAction)save:(id)sender;
-(IBAction)cancel:(id)sender;

@end
