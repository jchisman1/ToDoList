//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by James Chisolm on 9/16/14.
//
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
