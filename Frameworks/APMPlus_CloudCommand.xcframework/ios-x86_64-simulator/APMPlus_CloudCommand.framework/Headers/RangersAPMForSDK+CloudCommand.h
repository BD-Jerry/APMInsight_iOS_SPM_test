//
//  RangersAPMForSDK+CloudCommand.h
//  HeimdallrFinder
//
//  Created by xuminghao.eric on 2023/5/19.
//

#import "RangersAPMForSDK.h"
#import "RangersAPMCustomCommandBase.h"

NS_ASSUME_NONNULL_BEGIN

@interface RangersAPMForSDK (CloudCommand)

/**
 Enable cloud command fetching actively.
 @discussion After calling this, a request will be executed to fetch cloud commands immediately.
 */
- (void)enableCloudCommand;

/**
 Disable cloud command fetching.
 @discussion After calling this, cloud commands could be fetched actively.
 */
- (void)disableCloudCommand;

/**
 Register your custom class.
 @param handlerCls Custom classes must inherit from RangersAPMCustomBaseHandler.
 @discussion Your commands could not be executed until [RangersAPMForSDK enableCloudCommand] is called.
*/
- (void)addCustomCommandHandlerCls:(Class)handlerCls;

@end

NS_ASSUME_NONNULL_END
