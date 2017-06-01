//
//  DYNewsViewModel.h
//  DYPlayNews
//
//  Created by 袁斌 on 2017/6/1.
//  Copyright © 2017年 https://github.com/DefaultYuan. All rights reserved.
//

#import "DYBaseViewModel.h"

@interface DYNewsViewModel : DYBaseViewModel

- (RACSignal *) fetchNewsDataWithId:(NSString *)topId pageIndex:(NSUInteger)pageIndex;
- (RACSignal *) fetchNewsDetailWithId:(NSString *)newsId;
@end