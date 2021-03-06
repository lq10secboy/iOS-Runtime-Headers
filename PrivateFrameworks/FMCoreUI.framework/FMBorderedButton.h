/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMBorderedButton : FMDynamicTypeButton {
    UIColor * _borderColor;
    BOOL  _hairlineBorder;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) float borderWidth;
@property (nonatomic) float cornerRadius;
@property (nonatomic) BOOL hairlineBorder;

- (void).cxx_destruct;
- (void)_bbUpdateLayer;
- (void)awakeFromNib;
- (id)borderColor;
- (float)borderWidth;
- (float)cornerRadius;
- (BOOL)hairlineBorder;
- (void)prepareForInterfaceBuilder;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHairlineBorder:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)tintColorDidChange;

@end
