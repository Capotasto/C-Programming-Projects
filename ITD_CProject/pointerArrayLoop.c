//
//  pointerArrayLoop.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/12/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "pointerArrayLoop.h"

void mainPointerArrayLoop(void){

    void (*fun_ptr)(int) = &print; // & removed
    fun_ptr(10); // * removed
    (*fun_ptr)(10);
    
    
//    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
//    double *p;
//    int i;
//    p = balance;
//    /* output each array element's value */
//    printf( "Array values using pointer\n");
//    for ( i = 0; i < 5; i++ ) {
//        printf("*(p + %d) : %f\n", i, *(p + i) );
//    }
//    
//    printf( "Array values using balance as address\n");
//    for ( i = 0; i < 5; i++ ) {
//        printf("*(balance + %d) : %f\n", i, *(balance + i) );
//    
//    }
}

void print(int a){
    printf("Value of a is %d\n", a);

}