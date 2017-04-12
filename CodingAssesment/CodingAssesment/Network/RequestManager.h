//
//  RequestManager.h
//  CodingAssesment
//
//  Created by jose humberto partida garduño on 4/12/17.
//  Copyright © 2017 jose humberto partida garduño. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol RequestManagerDelegate

@required
-(void)searchCompletedWithSuccess:(id)response;
-(void)searchFail:(NSError*)error;

@end

@interface RequestManager : NSObject
@property (nonatomic,assign) id<RequestManagerDelegate>delegate;
+ (instancetype)sharedInstance;
@property (nonatomic,weak) UIView* progressReferenceView;
-(void)makeRequest:(NSString*)text dataDictionary:(NSDictionary*)data;


@end
