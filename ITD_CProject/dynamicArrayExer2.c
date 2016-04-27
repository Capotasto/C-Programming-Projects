//
//  dynamicArrayExer2.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/27/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "dynamicArrayExer2.h"

void doDescending(int * array, int size){
    
    
    bool sortedDone = false;
    
    while (!sortedDone) {
        bool isSorted = false;
        for (int i = 0; i < size-1 ; i++) {
            if (array[i] < array[i+1]) {
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


void dynamicArrayExer2(){
    
    int* a = (int*)malloc(sizeof(int));
    
    printf("Enter the size of array. its should be larger than 0 : ");
    scanf("%d", a);
    
    int array[*a];
    
    for (int i =0 ; i < *a; i++) {
        printf("Enter the num for a[%d]: ", i);
        scanf("%d: ", &array[i]);
    }
    
    puts("array is...");
    for (int i =0 ; i < *a; i++) {
        printf("%3d", array[i]);
    }
    
    puts("");
    
    doDescending(array, *a);
    
    puts("array sorted is...");
    for (int i =0 ; i < *a; i++) {
        printf("%3d", array[i]);
    }
    
    puts("");

    
    
}