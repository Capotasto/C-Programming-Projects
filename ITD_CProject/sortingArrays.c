//
//  keyValue.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/11/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "sortingArrays.h"
#define SIZE 10

void sortingArrays(void){
    
    int a[SIZE] = {21, 15, 10, 9 ,72, 100,35,45,10,90};
    int pass = 0;
    int hold = 0;
    
    for (pass =1 ; pass < SIZE ; pass++) {
        for (int i = 0; i < SIZE -1; i++) {
            if (a[i] > a[i+1]) {
                hold = a[i];
                a[i] = a[i+1];
                a[i+1] = hold;
            }
        }
    }
    
    printf("Sorting Result is ....\n");
    for(int i = 0; i < SIZE; i++){
        printf("%d\n", a[i]);
    }

}