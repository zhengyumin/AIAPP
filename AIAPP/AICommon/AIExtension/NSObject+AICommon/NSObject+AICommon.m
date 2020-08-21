//
//  NSObject+AICommon.m
//  AIAPP
//
//  Created by apple on 2020/8/21.
//  Copyright © 2020 hikvision. All rights reserved.
//

#import "NSObject+AICommon.h"
#import <objc/runtime.h>
@implementation NSObject (AICommon)
+ (BOOL)accessInstanceVariablesDirectly{
        
}

- (void)printMethodNamesOfClass:(Class)cls{
    unsigned int count;
    Method *methodList = class_copyMethodList(cls, &count);
    NSMutableString *methodNames =  [NSMutableString string];
    
    for (int i = 0; i < count; i++) {
        Method method = methodList[i];
        NSString *methedName = NSStringFromSelector(method_getName(method));
        [methodNames appendString:methedName];
        [methodNames appendString:@", "];
    }
    free(methodList);
    NSLog(@"%@ %@",cls,methodNames);
}
@end
