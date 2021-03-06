//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface SendMessage : NSObject <PBCoding>
{
    unsigned int version;
    unsigned int msgLocalId;
    unsigned int createTime;
    unsigned int status;
    unsigned int imageStatus;
    unsigned int type;
    NSString *userName;
    NSString *message;
    NSString *msgSource;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource;
@property(retain, nonatomic) NSString *message; // @synthesize message;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(nonatomic) unsigned int imageStatus; // @synthesize imageStatus;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId;
@property(nonatomic) unsigned int version; // @synthesize version;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

