#import <React/RCTBridgeModule.h>
#import "Pods/google-cast-sdk/GoogleCastSDK-2.10.4-Release/GoogleCast.framework/Headers/GoogleCast.h"

@interface GoogleCast : NSObject <RCTBridgeModule, GCKDeviceScannerListener, GCKDeviceManagerDelegate,GCKMediaControlChannelDelegate>

@property GCKMediaControlChannel *mediaControlChannel;
@property(nonatomic, strong) GCKApplicationMetadata *applicationMetadata;
@property(nonatomic, strong) GCKDevice *selectedDevice;
@property(nonatomic, strong) GCKDeviceScanner* deviceScanner;
@property(nonatomic, strong) GCKDeviceManager* deviceManager;
@property(nonatomic, strong) GCKMediaInformation* mediaInformation;
@property(nonatomic, strong) NSMutableDictionary *currentDevices;
@property(nonatomic, strong) NSString *kReceiverAppID;
@end
