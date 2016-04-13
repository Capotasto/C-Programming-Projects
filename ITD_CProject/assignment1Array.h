//
//  assignment1Array.h
//  ITD_CProject
//
//  Created by Norio Egi on 4/12/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef assignment1Array_h
#define assignment1Array_h

#include <stdio.h>
#include <stdbool.h>

#define ROW_ASSIGNMENT_ARRAY 3
#define COL_ASSIGNMENT_ARRAY 6

int mainAssignment1Array(void);
void getStudentIds(int a[ROW_ASSIGNMENT_ARRAY]);
void putStudentIds(int a[ROW_ASSIGNMENT_ARRAY], int b[ROW_ASSIGNMENT_ARRAY][COL_ASSIGNMENT_ARRAY]);
bool searchStudentId(int a[ROW_ASSIGNMENT_ARRAY], int typedNum);
bool createTwoDimensionalArray(int a[ROW_ASSIGNMENT_ARRAY][COL_ASSIGNMENT_ARRAY], int id);

#endif /* assignment1Array_h */
