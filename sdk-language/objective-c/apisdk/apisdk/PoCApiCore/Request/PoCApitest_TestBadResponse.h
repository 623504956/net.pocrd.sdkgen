// Auto Generated.  DO NOT EDIT!

#import "PoCApiCode.h"
#import "PoCBaseRequest.h"
#import "PoCApi_APITEST_BadResponse.h"

/*
 * 测试序列化异常
 * 
 * @author rendong
 */
@interface PoCApitest_TestBadResponse : PoCBaseRequest
{

}

/*
 * 当前请求的构造函数，以下参数为该请求的必填参数
 */
- (id) init;

/*
 * 当前请求有可能的异常返回值
 */
- (NSInteger) handleError;

/*
 * 获取服务端返回的请求结果实体
 */
- (PoCApi_APITEST_BadResponse *) result;

@end
