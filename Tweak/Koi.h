#import <UIKit/UIKit.h>
#import <Cephei/HBPreferences.h>
#import <Kitten/libKitten.h>

HBPreferences* preferences;

extern BOOL enabled;

UIColor* currentBundleBackgroundColor = nil;
UIColor* currentBundleMenuColor = nil;

// background
BOOL enableBackgroundColoringSwitch = YES;
NSString* backgroundAlphaValue = @"0.5";
NSString* selectedBackgroundColorValue = @"2";

// menu
BOOL enableMenuColoringSwitch = YES;
NSString* menuAlphaValue = @"1.0";
NSString* selectedMenuColorValue = @"1";

// magic
NSString* magicValue = @"0.8";

@interface _UIContextMenuContainerView : UIView
- (id)dismissalHandler;
@end

@interface _UIContextMenuActionsListView : UIView
@end

@interface SBIconController : UIViewController
- (id)containerViewForPresentingContextMenuForIconView:(id)iconView;
- (void)_forceTouchControllerWillPresent:(id)arg1;
@end

@interface SBIconImageView : UIView
- (UIImage *)displayedImage;
@end

@interface SBIcon
- (NSString *)applicationBundleID;
@end

@interface SBIconView : UIView
- (id)_iconImageView;
- (id)folder;
- (SBIcon *)icon;
- (void)activateShortcut:(id)item withBundleIdentifier:(NSString*)bundleID forIconView:(id)iconView;
- (SBIconImageView *)currentImageView;
@end

@interface SBFolder : NSObject
- (NSArray<SBIcon *> *)icons;
@end

@interface UIImage (Koi)
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2 scale:(double)arg3;
@end

@interface _UIPreviewPlatterPresentationController : UIPresentationController
- (void)_handleDismissalTapGesture:(id)arg1;
@end
