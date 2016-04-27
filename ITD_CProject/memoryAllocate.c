//
//  memoryAllocate.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/25/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "memoryAllocate.h"


void charAllocate(){

    char *str;
    
    str = (char *)malloc(15);
    strcpy(str, "Using characters");
    printf("String = %s,  address = %p\n", str, str);
    
    /* Reallocating memory*/
    str = (char*) realloc(str, 30);
    strcat(str, " and reallocation");
    
    printf("String = %s, address = %p\n", str, str);

    free(str);
    
}

void mainMemoryAllocate(){
    
    int *p;
    
    p = (int*)malloc(sizeof(int));
    
    if (p == 0) {
        puts("Error: out of memory");
        return;
    }
    
    *p=5;
    printf("%d\n", *p);
    free(p);
    
    charAllocate();

}