/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, SAMovieResolution;

@interface SAMovieImage : AceObject <SAAceSerializable> {
}

@property(retain) SAMovieResolution * resolution;
@property(copy) NSURL * uri;

+ (id)image;
+ (id)imageWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)resolution;
- (void)setResolution:(id)arg1;
- (void)setUri:(id)arg1;
- (id)uri;

@end
