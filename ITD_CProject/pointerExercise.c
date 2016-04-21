//
//  pointerExercise.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/21/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "pointerExercise.h"

const int arraySize = 10;


void checkItems(int array[arraySize], int *result){
    
    for (int i = 0; i < arraySize; i++) {
        if (array[i]%10 == 0) {
            *(result+i) = array[i] * 1000;
            
        }else if (array[i]%5 == 0){
            *(result+i) = array[i] * 50;
            
        }else if(array[i]%2 == 0){
            *(result+i) = array[i] * 20;
            
        }else{
            *(result+i) = array[i];
        }
       
        
        
    }
}


void pointerExercise(){
    
    int array[arraySize];
    int result[arraySize];
    
    for (int i = 0; i < arraySize; i++) {
        printf("Enter ten numbers for array[%d].(It shuould be over zero!)\n", i);
        scanf("%d", &array[i]);
        if (array[i] <= 0) {
            puts("Wrong number!!");
            i--;
        }

    }
    
    checkItems(array, result);
    
    for (int i = 0; i < arraySize; i++) {
        printf("%d, ", array[i]);
    }
    puts("\n");
    for (int i = 0; i < arraySize; i++) {
        printf("%d, ", result[i]);
    }
    puts("\n");
    
}