//
//  ViewController.h
//  Tip-Calculator
//
//  Created by Alex Bearinger on 2017-01-20.
//  Copyright © 2017 Alex Bearinger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TipModel.h"

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *tipAmount;

@property (weak, nonatomic) IBOutlet UIButton *calculateTip;
@property (weak, nonatomic) IBOutlet UITextField *billAmountTextField;
@property (weak, nonatomic) IBOutlet UITextField *tipAmountLabel;
@property NSInteger cost;
@property NSInteger tipPercent;
@property TipModel *tipModel;

@end

