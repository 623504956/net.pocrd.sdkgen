// Auto Generated.  DO NOT EDIT!

#import "PoCApiCode.h"
#import "PoCBaseRequest.h"
#import "PoCApi_StringResp.h"

/*
 * 测试test post body
 * 
 * @author rendong
 */
@interface PoCApitest_TestPostbody : PoCBaseRequest
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
- (PoCApi_StringResp *) result;

@end
