/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray;

@interface MFPGradientBrush : MFPBrush  {
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mTransform;
    NSArray *mBlend;
    NSArray *mColorBlend;
    int mWrapMode;
    NSArray *mStops;
    struct CGShading { } *mShading;
    struct CGFunction { } *mShadingFunction;
}


- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (id)color;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)endColor;
- (id)startColor;
- (void)createShading;
- (void)createShadingFunction;
- (void)createStopsFromStartAndEndColors;
- (void)createStopsFromBlend;
- (void)createStopsFromColorBlend;
- (id)colorAtPosition:(float)arg1;
- (void)fillPath:(struct CGPath { }*)arg1 evenOddRule:(BOOL)arg2;
- (void)createPhoneBrush;
- (void)setWrapMode:(int)arg1;
- (void)setColorBlend:(id)arg1;
- (void)setBlend:(id)arg1;

@end