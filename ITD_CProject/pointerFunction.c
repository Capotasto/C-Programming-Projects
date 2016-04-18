//
//  pointerFunction.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/18/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "pointerFunction.h"

int printPointerFunction(int *a, int *b){
    
    return *a * *b;

    //printf("Value of sum is %d\n", *a + *b);
}


void mainPointerFunction(){
    
    int num1, num2, result;
    
    printf("Enter the two number like this \"1, 2\"\n");
    scanf("%d, %d", &num1, &num2);
    
    int (*func_ptr)(int*, int*)  = &printPointerFunction;
    
    result = (*func_ptr)(&num1, &num2);
    
    printf("Valus are %d, %d, %d\n", num1, num2, result);
    
}
