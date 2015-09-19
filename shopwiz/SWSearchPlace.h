//
//  SWSearchPlace.h
//  shopwiz
//
//  Created by Pritesh Nandgaonkar on 19/09/15.
//  Copyright (c) 2015 Pritesh Nandgaonkar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>


@interface SWSearchPlace : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) CLLocation *location;

@end
