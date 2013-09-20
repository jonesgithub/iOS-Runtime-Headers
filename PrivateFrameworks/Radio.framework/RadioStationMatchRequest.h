/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, SSURLConnectionRequest;

@interface RadioStationMatchRequest : RadioRequest {
    NSArray *_libraryTrackDictionaries;
    SSURLConnectionRequest *_request;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithLibraryTrackDictionaries:(id)arg1;
- (void)startWithCompletionHandler:(id)arg1;

@end