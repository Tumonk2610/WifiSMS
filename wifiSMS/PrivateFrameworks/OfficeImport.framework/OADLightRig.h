/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADRotation3D;



@interface OADLightRig : NSObject <NSCopying>
{
    OADRotation3D *mRotation;
    NSInteger mType;
    NSInteger mDirection;
}


- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)rotation;
- (void)setRotation:(id)arg1;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (NSInteger)direction;
- (void)setDirection:(NSInteger)arg1;

@end
