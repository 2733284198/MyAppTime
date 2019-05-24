//
//  ATMainWindowController.h
//  MyAppTime
//
//  Created by Evian张 on 2019/3/26.
//  Copyright © 2019 Evian张. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "ATDataModel.h"
#import "ATBarChartView.h"
#import "ATTimeUnit.h"

NS_ASSUME_NONNULL_BEGIN

@interface ATMainWindowController : NSWindowController <ATBarChartViewDelegate, ATBarChartViewDataSource, NSTableViewDelegate, NSTableViewDataSource>

typedef enum ATCurrentDisplayMode {
    ATCurrentModeDisplayDay,
    ATCurrentModeDisplayWeek,
    ATCurrentModeDisplayMonth,
    ATCurrentModeDisplayYear
} ATCurrentDisplayMode;

@property (nonatomic) IBOutlet NSSegmentedControl *segmentedControl;
@property (nonatomic) IBOutlet ATBarChartView *barChartView;
@property (nonatomic) IBOutlet NSTableView *tableView;

@property (nonatomic) ATDataModel *dataModel;
@property (nonatomic) NSMutableArray<ATTimeUnit *> *recordingDataValues;
@property (nonatomic) NSMutableArray<NSString *> *recordingDataNames;
@property (nonatomic) NSMutableDictionary<NSString *, ATTimeUnit *> *recordingDurations;
@property (nonatomic) NSArray<NSString *> *recordingBundleIDs;

@end

NS_ASSUME_NONNULL_END
