//
//  dynamicarrayExer.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/26/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "dynamicarrayExer.h"


void sortArray(int *array, int size){
    
    bool hasDone = false;
    
    while (!hasDone) {
        bool isSorted = false;
        for (int i = 0; i < size-1; i++) {
            if (*(array+i) > *(array+i+1)) {
                int temp = *(array+i+1);
                *(array+i+1) = *(array+i);
                *(array+i) = temp;
                isSorted = true;
            }
        }
        
        if (isSorted == false ) {
            hasDone = true;
        }
    }
    
}

void printArrays(int* array, int input){

    for (int i = 0; i < input; i++) {
        printf("*(array+%d) = %d\n", i,array[i]);
    }

}

int* funcMix(int *array1, int *array2, int* array3,  int input1, int input2){
    int *array;
    
    array = (int *)malloc(input1+input2 * sizeof(int));
    
    int j = 0;
    for (int i = 0; i < input1+input2; i++) {
        if (i < input1) {
            *(array + i) = *(array1+i);
        }else{
            *(array + i) = *(array2+j);
            j++;
        }
    }
    
    array3 = array;
    
    free(array);
    
    return array3;
    
}

void func(int* array, int input){
    
    int *p;
    
    p = (int *)malloc(input * sizeof(int));
    
    for (int i = 0; i < input; i++) {
        printf("Enter the value of array [%d]: ", i);
        scanf("%d", &p[i]);
    }
    
    array = p;
    
    free(p);
}

void dynamicarrayExer(){
    
    int input1;
    int input2;
    int *array1;
    int *array2;
    int *array3;
    
    printf("Enter the value for size of array1: ");
    scanf("%d", &input1);
    func(array1, input1);
    
    printf("Enter the value for size of array2: ");
    scanf("%d", &input2);
    func(array2, input2);
    
    funcMix(array1, array2, array3, input1, input2);
    
    puts("\nArray1 is ...:");
    printArrays(array1, input1);
    
    puts("\nArray2 is ...:");
    printArrays(array2, input2);
    
    puts("\nArray3 is ...:");
    printArrays(array3, input1+input2);
    
    puts("\nSorted Array3 is ...:");
    sortArray(array3, input1+input2);
    printArrays(array3, input1+input2);

}
