
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNBasicDeviceInfoSpec.h"

@interface BasicDeviceInfo : NSObject <NativeBasicDeviceInfoSpec>
#else
#import <React/RCTBridgeModule.h>

@interface BasicDeviceInfo : NSObject <RCTBridgeModule>
#endif

@end
