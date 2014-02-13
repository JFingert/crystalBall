//
//  JFViewController.h
//  ChrystalBall
//
//  Created by Joshua Fingert on 2/5/14.
//  Copyright (c) 2014 JoshuaFingert. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JFCrystalBall;

@interface JFViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) JFCrystalBall *crystalBall;

- (void) makePrediction;
@end
