//
//  SACalendarConstants.h
//  SACalendar
//
//  User Interface constants. Customize your calendar here.
//
//  Created by Nop Shusang on 7/14/14.
//  Copyright (c) 2014 SyncoApp. All rights reserved.
//
//  Distributed under MIT License

#import <Foundation/Foundation.h>

/**
 *  Constants. Do not change
 */
#define MAX_MONTH 12
#define MIN_MONTH 1
#define MAX_CELL 42
#define DESELECT_ROW -1
#define DAYS_IN_WEEKS 7
#define MAX_WEEK 6

/**
 *  Calendar's proportion
 */
#define calendarToHeaderRatio 7
#define headerFontRatio 0.4

#define cellFontRatio 0.3
#define labelToCellRatio 0.7
#define circleToCellRatio 0.8

/**
 * Calendar's color
 */

// There are 3 layers view in SACalendar, the default UIView, the scroll view, and the collection view.
// Change their colors here

#define viewBackgroundColor [UIColor whiteColor]
#define scrollViewBackgroundColor [UIColor clearColor]
#define calendarBackgroundColor [UIColor clearColor]

#define headerTextColor [UIColor grayColor]

/**
 *  Cell's property
 */

// All cells
#define cellFont [UIFont systemFontOfSize:desiredFontSize * cellFontRatio]
#define cellBoldFont [UIFont boldSystemFontOfSize:desiredFontSize * cellFontRatio]

#define cellBackgroundColor [UIColor clearColor]
#define cellTopLineColor [UIColor clearColor]

#define dateTextColor [UIColor grayColor]

// Current date's cell
#define currentDateCircleColor [UIColor colorWithRed:73/255.0f green:139/255.0f blue:234/255.0f alpha:1.0f]
#define currentDateTextColor [UIColor whiteColor]

// Selected date's cell
#define selectedDateCircleColor [UIColor blackColor]
#define selectedDateTextColor [UIColor whiteColor]

/*
 * Loading states for infinite scroll view is to load the scroll view on the left (previous) first
 * the load the scroll view on the right (next) and finally load the scroll view in the middle (current)
 */
typedef enum {LOADSTATESTART = -1, LOADSTATEPREVIOUS = 0, LOADSTATENEXT, LOADSTATECURRENT} loadStates;

/*
 * Since we are reusing the scroll views, we need to define the three possible scroll views' position
 * Assuming that the scroll views are called 0,1,2 then the three states are
 * 0 1 2, 2 0 1, and 1 2 0
 */
typedef enum {SCROLLSTATE_120 = 0, SCROLLSTATE_201 = 1, SCROLLSTATE_012} scrollStates;

/**
 *  Scroll view's scroll direction
 */
typedef enum {ScrollDirectionHorizontal = 0, ScrollDirectionVertical = 1} scrollDirection;

