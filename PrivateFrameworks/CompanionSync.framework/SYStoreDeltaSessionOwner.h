/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYStoreDeltaSessionOwner : SYStoreSessionOwner {
    NSArray *_changes;
    unsigned int _currentIdx;
}

@property (nonatomic, readonly) unsigned int changeCount;

- (void).cxx_destruct;
- (unsigned int)changeCount;
- (id)initWithChanges:(id)arg1;
- (int)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;

@end
