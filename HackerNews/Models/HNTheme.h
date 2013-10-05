//
//  HNTheme.h
//  HackerNews
//
//  Created by Matthew Stanford on 10/3/13.
//  Copyright (c) 2013 Matthew Stanford. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HNTheme : NSObject
{
    UIFont *commentNormalFont;
    UIFont *commentBoldFont;
    UIFont *commentItalicFont;
    UIFont *commentCodeFont;
    
    CGFloat commentFontSize;
}

@property (nonatomic, strong) UIFont *commentNormalFont;
@property (nonatomic, strong) UIFont *commentBoldFont;
@property (nonatomic, strong) UIFont *commentItalicFont;
@property (nonatomic, strong) UIFont *commentCodeFont;
@property (nonatomic, assign) CGFloat commentFontSize;


@end