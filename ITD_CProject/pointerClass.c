//
//  pointerClass.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/18/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "pointerClass.h"

void pointerMultiply(int *num1, int *num2, int *result){
    
    *result = *num1 * *num2;

}

void pritArray(int array[5]){
    
    for(size_t i= 0; i < 5; i++){
        printf("*(array+%lu) = %d\n", i, *(array+i));
    }

}


void mainPointerClass(){
    
    //int num1, num2, result;
    //puts("Enter the number for num1 and num2 like this \'1, 2\'");
    //scanf("%d, %d", &num1, &num2);
    //pointerMultiply(&num1, &num2, &result);
    //printf("%d, %d, %d\n", num1, num2, result);
    
    int array[5];
    puts("Enter the number for array 5 times.");
    for (size_t i = 0; i < sizeof(array)/sizeof(int); i++) {
        scanf("%d", &array[i]);
    }
    
    pritArray(array);
    
    
}