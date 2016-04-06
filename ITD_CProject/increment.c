//
//  increment.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "increment.h"

void increment(void){
    int int1;
    int int2;
    int int3;
    int int4;
    
    //------    int1++   ------
    printf("Enter the number int1\n");
    scanf("%d", &int1);
    
    printf("int1 is %d\n", int1);
    printf("int1++ is %d\n", int1++);
    printf("int1 is %d\n", int1);
    
    //------    ++int2   ------
    printf("Enter the number int2\n");
    scanf("%d", &int2);
    
    printf("int2 is %d\n", int2);
    printf("++int2 is %d\n", ++int2);
    printf("int2 is %d\n", int2);
    
    //------    int3--   ------
    printf("Enter the number int3\n");
    scanf("%d", &int3);
    
    printf("int3 is %d\n", int3);
    printf("int3-- is %d\n", int3--);
    printf("int3 is %d\n", int3);
    
    //------    --int4   ------
    printf("Enter the number int4\n");
    scanf("%d", &int4);
    
    printf("int4 is %d\n", int4);
    printf("--int4 is %d\n", --int4);
    printf("int4 is %d\n", int4);
    
}