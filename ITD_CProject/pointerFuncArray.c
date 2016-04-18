//
//  pointerFuncArray.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/18/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "pointerFuncArray.h"

void add(int a, int b){

    printf("%d + %d = %d\n", a, b, a+b);
}

void subtact(int a, int b){
    
    printf("%d - %d = %d\n", a, b, a-b);
}


void multiply(int a, int b){
    
    printf("%d * %d = %d\n", a, b, a*b);
}

void divide(int a, int b){
    
    printf("%d / %d = %d\n", a, b, a/b);
}

void mainPointerFuncArray(){

    size_t ch;
    int num1, num2;
    
    void (*func_ptr_arr[])(int, int) = { add, subtact, multiply, divide};
    
    puts("Enter Choice: 0 for add, 1 for subtract, 2 for multiply, 3 for devide");
    scanf("%zd", &ch);
    
    puts("Enter the Two number!");
    scanf("%d, %d", &num1, &num2);
    
    if (ch < 4) {
        (*func_ptr_arr[ch])(num1, num2);
    }
    
}