//
// Copyright (c) 2008-present, Meitu, Inc.
// All rights reserved.
//
// This source code is licensed under the license found in the LICENSE file in
// the root directory of this source tree.
//
// Created on: 11/08/2017
// Created by: EuanC
//


#import <UIKit/UIKit.h>

@interface UIViewController (MTHawkeyeLayoutSupport)

- (id<UILayoutSupport>)mt_hawkeye_navigationBarTopLayoutGuide;
- (id<UILayoutSupport>)mt_hawkeye_navigationBarBottomLayoutGuide;

@end
