//
//  pointerClass.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/18/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "pointerClass.h"

void pointerMultiply(int *num1, int *num2, int *result){
    
    *result = *num1 * * num2;

}


void mainPointerClass(){
    
    int num1, num2, result;
    
    puts("Enter the number for num1 and num2 like this \'1, 2\'");
    scanf("%d, %d", &num1, &num2);
    
    pointerMultiply(&num1, &num2, &result);
    
    printf("%d, %d, %d\n", num1, num2, result);
}