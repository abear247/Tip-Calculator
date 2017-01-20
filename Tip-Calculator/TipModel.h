//
//  TipModel.h
//  Tip-Calculator
//
//  Created by Alex Bearinger on 2017-01-20.
//  Copyright © 2017 Alex Bearinger. All rights reserved.
//

#import <Foundation/Foundation.h>

//@protocol TipDelegate <NSObject>
//
//
//
//@end


@interface TipModel : NSObject


-(NSString *)calculateTip:(NSString *)cost tipPercent:(NSString *)tipPercent;
@end
