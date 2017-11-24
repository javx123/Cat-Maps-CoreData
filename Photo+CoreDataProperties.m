//
//  Photo+CoreDataProperties.m
//  CatMapCD
//
//  Created by Javier Xing on 2017-11-24.
//  Copyright © 2017 Javier Xing. All rights reserved.
//
//

#import "Photo+CoreDataProperties.h"

@implementation Photo (CoreDataProperties)

+ (NSFetchRequest<Photo *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Photo"];
}

@dynamic title;
@dynamic photoID;
@dynamic url;
@dynamic latitude;
@dynamic image;
@dynamic longitude;
@dynamic urlSmall;

@end
