//
//  dynamicArray.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/26/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "dynamicArray.h"

const int STATIC_ARRAY_SIZE = 10;


void printDynamicArray(int *array, int input){
    
    for (int i= 0; i < sizeof(array) ; i++) {
        printf("dynamic Array [%d] is %d\n", i, *(array+i));

    }

}


void evenNumber(int *array, int input){
    
    for (int i = 0; i < input; i++) {
        if (*(array+i) % 2 == 0) {
            *(array+i) += 2;
        }
    }

}

void oddNumber(int *array, int input){
    
    for (int i = 0; i < input; i++) {
        if (*(array+i) % 2 != 0) {
            *(array+i) += 1;
        }
    }

}

void staticExer(){
    
    int staticArray[STATIC_ARRAY_SIZE];
    
    for (int i =0 ; i < STATIC_ARRAY_SIZE; i++) {
        printf("Enter the num for static array[%d] : ", i);
        scanf("%d", &staticArray[i]);
    }
    
    for (int i = 0; i < STATIC_ARRAY_SIZE; i++) {
        printf("Static Array [%d] is %d\n", i, staticArray[i]);
    }
    
    evenNumber(staticArray, STATIC_ARRAY_SIZE);
    
    for (int i = 0; i < STATIC_ARRAY_SIZE; i++) {
        printf("Static Array [%d] (After Even function) is %d\n", i, staticArray[i]);
    }
    
    oddNumber(staticArray, STATIC_ARRAY_SIZE);
    
    for (int i = 0; i < STATIC_ARRAY_SIZE; i++) {
        printf("Static Array [%d] (After Odd function) is %d\n", i, staticArray[i]);
    }

}

void dynamicArrayPractice1(){
    int input;
    double *array;
    
    printf("Enter the size of array that you want: ");
    scanf("%d", &input);
    
    array = (double*) malloc(input * sizeof(double));
    
    for (int i =0; i < input; i++) {
        *(array + i) = i *i;
    }
    
    for (int i = 0; i < input; i++) {
        printf("*(array+%d) = %lf\n", i, *(array + i));
    }
    
    free(array);
    

}

void getUserValue(){
    
    int input;
    int *array;
    
    printf("Enter the size of array that you want: ");
    scanf("%d", &input);
    
    array = (int*) malloc(input * sizeof(int));
    
    for (int i =0; i < input; i++) {
        printf("Enter the number for array[%d]: ", i);
        scanf("%d", array + i);
    
    }
    
    evenNumber(array, input);
    oddNumber(array, input);
    printDynamicArray(array, input);

}

void dynamicArray(){
    
    
    getUserValue();
    
    
    

}