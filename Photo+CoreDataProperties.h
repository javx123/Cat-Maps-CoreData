//
//  Photo+CoreDataProperties.h
//  CatMapCD
//
//  Created by Javier Xing on 2017-11-24.
//  Copyright © 2017 Javier Xing. All rights reserved.
//
//

#import "Photo+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Photo (CoreDataProperties)

+ (NSFetchRequest<Photo *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *title;
@property (nullable, nonatomic, copy) NSString *photoID;
@property (nullable, nonatomic, copy) NSString *url;
@property (nonatomic) double latitude;
@property (nullable, nonatomic, retain) NSData *image;
@property (nonatomic) double longitude;
@property (nullable, nonatomic, copy) NSString *urlSmall;

@end

NS_ASSUME_NONNULL_END
