//
//  ViewController.h
//  QRReader
//
//  Created by Stephen Calabro on 4/13/15.
//  Copyright (c) 2015 Stephen Calabro. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>

@property (weak, nonatomic) IBOutlet UIView *viewPreview;
@property (weak, nonatomic) IBOutlet UILabel *qrStatus;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *startBtn;

- (IBAction)startStopReading:(id)sender;

@end

