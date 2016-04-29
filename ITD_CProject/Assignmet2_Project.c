//
//  Assignmet2_Project.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/27/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Assignmet2_Project.h"


void sortArray_assignment2(int *array, int size){
    
    bool sortedDone = false;
    
    while (!sortedDone) {
        bool isSorted = false;
        for (int i = 0; i < size-1 ; i++) {
            if (array[i] > array[i+1]) {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                isSorted = true;
            }
        }
        
        if (!isSorted) {
            sortedDone = true;
        }
    }
}

void Assignmet2_Project(){
    
    int size = 1;
    
    int *dynamicArray;
    
    dynamicArray = (int*) malloc(size * sizeof(int));
    
    if (dynamicArray == NULL){
        puts("Something Wrong!!!");
        exit(0);
    }
    
    int input = 0;
    int loopCount = 0;
    while (input != -999) {
        if (1 <= loopCount) {
            size += 1;
            dynamicArray = (int*) realloc(dynamicArray,size * sizeof(int));
            if (dynamicArray == NULL){
                puts("Something Wrong!!!");
                break;
            }
        }
        printf("Enter the number anytimes you want to add. array[%d]", loopCount);
        scanf("%d", &input);
        if (input != -999) {
            *(dynamicArray+loopCount) = input;
            loopCount++;
        }else{
            puts("Input done!!!");
            break;
        }
    }
    
    puts("Input arrays!");
    for (int i = 0; i < loopCount; i++) {
        printf("%5d", *(dynamicArray+i) );
    }
    
    puts("\n");
    
    sortArray_assignment2(dynamicArray, loopCount);
    
    puts("Sorted Input arrays!");
    for (int i = 0; i < loopCount; i++) {
        printf("%5d", *(dynamicArray+i) );
    }
    
    puts("");
    
    free(dynamicArray);
    
}