/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <PUPhotoSharingManagerDelegate>, NSTimer, PLManagedAsset, PLProgressView, PLVideoRemaker, UIActivity;

@interface PUPhotoSharingManager : NSObject {
    UIActivity *_activity;
    PLManagedAsset *_currentVideo;
    <PUPhotoSharingManagerDelegate> *_delegate;
    NSTimer *_publishingProgressTimer;
    PLProgressView *_publishingProgressView;
    PLVideoRemaker *_remaker;
    BOOL _remakingWasCancelled;
}

@property(retain) UIActivity * activity;
@property <PUPhotoSharingManagerDelegate> * delegate;

- (void).cxx_destruct;
- (id)_currentPublishingAgent;
- (void)_publishingAgentDidCancel:(id)arg1;
- (void)_publishingAgentDidEndRemaking:(id)arg1;
- (void)_publishingAgentDidFinishPublishing:(id)arg1;
- (void)_publishingAgentDidStartRemaking:(id)arg1;
- (void)_publishingAgentsDidForceCancel:(id)arg1;
- (void)_publishingDidFinish;
- (void)_updatePublishingProgressView:(id)arg1;
- (id)activity;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setActivity:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
