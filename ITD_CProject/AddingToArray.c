//
//  AddingToArray.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/11/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "AddingToArray.h"
#define SIZE 5


void AddingToArray(void){
    
    int a[SIZE]  = {1000, 2123, 4244, 3655, 4222}; //initialize array a
    size_t i; //counter
    
    puts("Effects of passing entire array by reference:\n\n\n The values of the original array are:");
    
    for (i = 0; i < SIZE; i++) {
        printf("%6d", a[i]);
    }
    
    puts("");
    
    modifyArray(a, SIZE);
    
    puts("The values of the modified array are:");
    
    for (i = 0; i < SIZE; i++) {
        printf("%6d", a[i]);
    }
    
    printf("\n\n\nEffects of passing array elemnt by value: \n\n The value of a[3] is %d\n", a[3]);
    
    
    modifyElement(a[3]);
    
//    const int INPUT_NUM = 10;
//    
//    int array[INPUT_NUM];
//    
//    printf("Enter the element 10 times.\n");
//
//    
//    for (int i = 0; i < INPUT_NUM; i++) {
//        scanf("%d", &array[i]);
//    }
//    
//    printf("Array's element is ....\n");
//    for(int i = 0;i < sizeof(array)/sizeof(int); i++){
//        printf("%d\n",array[i]);
//    }
}

void modifyArray(int b[], size_t size){
    size_t j;
    
    for (j = 0; j < size; j++) {
        b[j] *= 2;
    }
    
}

void modifyElement(int e){
    printf("Value in modifyElement is %d\n", e *= 2);

}