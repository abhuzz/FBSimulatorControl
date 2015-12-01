/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <FBSimulatorControl/FBSimulatorInteraction.h>

@class FBSimulatorBinary;
@protocol FBProcessInfo;

@interface FBSimulatorInteraction ()

@property (nonatomic, strong) FBSimulator *simulator;
@property (nonatomic, strong) FBSimulatorSessionLifecycle *lifecycle;

/**
 Chains an interaction on an process, for the given application.
 */
- (instancetype)binary:(FBSimulatorBinary *)binary interact:(BOOL (^)(id<FBProcessInfo> process, NSError **error))block;

@end
