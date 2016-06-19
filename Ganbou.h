//
//  Ganbou.h
//  mokuhyou2
//
//  Created by USER on 2014/09/23.
//  Copyright (c) 2014年 USER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Jitsugen;

@interface Ganbou : NSManagedObject

@property (nonatomic, retain) NSString * ganbouName;
@property (nonatomic, retain) NSString * riyu;
@property (nonatomic, retain) NSNumber * primaryId;
@property (nonatomic, retain) NSSet *jitsugen;
@end

@interface Ganbou (CoreDataGeneratedAccessors)

- (void)addJitsugenObject:(Jitsugen *)value;
- (void)removeJitsugenObject:(Jitsugen *)value;
- (void)addJitsugen:(NSSet *)values;
- (void)removeJitsugen:(NSSet *)values;

@end
