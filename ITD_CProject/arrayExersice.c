//
//  arrayExersice.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/8/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "arrayExersice.h"
#define MAX_STRING "heheheh"

const int SIZE = 10;

void arrayExersice() {
    
    int n1[SIZE];
    int n2[SIZE];
    int n3[SIZE];
    size_t i;
    
    for (i = 0; i < 10; ++i) {
        n1[i] = (int)i+90;
        n2[i] = (int)i+90;
        n3[i] = n1[i] + n2[i];
    }
    
    printf("%s%13s\n", "Element","Value");
    
    printf("Array 1 is ...:\n");
    int sizeOfArray1 = sizeof(n1)/sizeof(int);
    
    for (i = 0; i < sizeOfArray1; i++) {
        
        printf("%7lu%13d\n", i, n1[i]);
        
    }
    
    printf("Array 2 is ...:\n");
    int sizeOfArray2 = sizeof(n2)/sizeof(int);
    
    
    for (i = 0; i < sizeOfArray2; i++) {
        printf("%7lu%13d\n", i, n2[i]);
    }
    
    printf("Array 3 is ...:\n");
    int sizeOfArray3 = sizeof(n3)/sizeof(int);
    
    
    for (i = 0; i < sizeOfArray3; i++) {
        printf("%7lu%13d\n", i, n3[i]);
    }
    
    printf(MAX_STRING);
    
    
}