//
//  DetailViewController.h
//  NewsCollector
//
//  Created by Pavel Anikin on 20.10.16.
//  Copyright © 2016 APVEX, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NCDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

