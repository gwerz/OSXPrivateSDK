//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>;

@interface FirstLogInHelper : NSObject
{
    struct OwnPtr<Safari::ObjCNotifier> _notifier;
    struct Vector<WTF::RefPtr<Safari::TopSite>, 0, WTF::CrashOnOverflow> _pendingSites;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _progressHandler;
    NSObject<OS_dispatch_group> *_snapshotStatusGroup;
    unsigned long long _totalSnapshotFetches;
    unsigned long long _successfulSnapshotFetches;
    id _appLaunchObserver;
}

+ (void)performFirstLogInWorkWithCompletionHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) id appLaunchObserver; // @synthesize appLaunchObserver=_appLaunchObserver;
@property(nonatomic) unsigned long long successfulSnapshotFetches; // @synthesize successfulSnapshotFetches=_successfulSnapshotFetches;
@property(nonatomic) unsigned long long totalSnapshotFetches; // @synthesize totalSnapshotFetches=_totalSnapshotFetches;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *snapshotStatusGroup; // @synthesize snapshotStatusGroup=_snapshotStatusGroup;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)currentProgress;
- (void)didFinishPreLogInWork;
- (void)snapshotFetchingStatusDidChange:(const struct Notification *)arg1;
- (void)snapshotDidLoad:(const struct Notification *)arg1;
- (void)snapshotStatusDidLoad:(const struct Notification *)arg1;
- (void)refetchSnapshots;
- (void)loadExistingSnapshotStates;
- (void)run;
- (void)dealloc;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;

@end

