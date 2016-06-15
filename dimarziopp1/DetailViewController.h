//
//  DetailViewController.h
//  dimarziopp
//
//  Created by Harrison Ching on 6/15/16.
//  Copyright © 2016 Harrison Ching. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

