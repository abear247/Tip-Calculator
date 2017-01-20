//
//  TipModel.m
//  Tip-Calculator
//
//  Created by Alex Bearinger on 2017-01-20.
//  Copyright © 2017 Alex Bearinger. All rights reserved.
//

#import "TipModel.h"

@implementation TipModel



-(NSString *)calculateTip:(NSString *)cost tipPercent:(NSString *)tipPercent{
    
    float tipDecimal = [tipPercent floatValue]/100;
    
    NSNumberFormatter *numberFormatter = [NSNumberFormatter new];
    [numberFormatter setNumberStyle:NSNumberFormatterCurrencyISOCodeStyle];
    
    NSString *number = [numberFormatter stringFromNumber:[NSNumber numberWithFloat:[cost floatValue]*tipDecimal]];
    return [NSString stringWithFormat:@"%@",number];
}

@end
