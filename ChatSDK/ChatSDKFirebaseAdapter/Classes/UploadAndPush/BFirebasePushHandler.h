//
//  BFirebasePushHandler.h
//  XMPPChat
//
//  Created by Benjamin Smiley-andrews on 02/08/2017.
//  Copyright © 2017 deluge. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ChatSDKCore/BAbstractPushHandler.h>
#import <Firebase/Firebase.h>

@interface BFirebasePushHandler : BAbstractPushHandler<FIRMessagingDelegate> {
    NSString * _userPushToken;
    BOOL _authFinished;
}

@property (nonatomic, readwrite) void(^tokenRefreshed)();

@end
