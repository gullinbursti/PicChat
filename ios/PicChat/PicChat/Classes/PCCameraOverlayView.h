//
//  PCCameraOverlayView.h
//  PicChat
//
//  Created by Matthew Holcombe on 10.28.12.
//  Copyright (c) 2012 Built in Menlo, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PCCameraViewController.h"

@protocol PCCameraOverlayViewDelegate;
@interface PCCameraOverlayView : UIView

@property(nonatomic, assign) id <PCCameraOverlayViewDelegate> delegate;

@end


@protocol PCCameraOverlayViewDelegate
- (void)cameraOverlayViewTakePicture:(PCCameraOverlayView *)cameraOverlayView;
- (void)cameraOverlayViewChangeCamera:(PCCameraOverlayView *)cameraOverlayView;
- (void)cameraOverlayViewShowCameraRoll:(PCCameraOverlayView *)cameraOverlayView;
- (void)cameraOverlayViewCloseCamera:(PCCameraOverlayView *)cameraOverlayView;
- (void)cameraOverlayViewLeftTabTapped:(PCCameraOverlayView *)cameraOverlayView;
- (void)cameraOverlayViewRightTabTapped:(PCCameraOverlayView *)cameraOverlayView;
- (void)cameraOverlayViewChangeFlash:(PCCameraOverlayView *)cameraOverlayView;
@optional
- (void)cameraOverlayViewHidePreview:(PCCameraOverlayView *)cameraOverlayView;
@end