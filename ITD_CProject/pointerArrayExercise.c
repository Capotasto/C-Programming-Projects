//
//  pointerArrayExercise.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/19/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "pointerArrayExercise.h"

const int MAX = 50;
int test = 10;

int* getEven(int *a, int *b){
    int static array[MAX];
    int j = 0;
    for (int i = *a; i <= *b; i++) {
        if (i%2 == 0) {
            array[j] = i;
            j++;
        }
    }
    printf("%d", test);
    
    return array;
    
}

int* getOdd(int *a, int *b){
    int static array[MAX];
    int j = 0;
    for (int i = *a; i <= *b; i++) {
        if (i%2 != 0) {
            array[j] = i;
            j++;
        }
    }
    
    return array;
}

int getSum(int *even, int *odd){
    
    int sum = 0;
    for (int i = 0; *(even + i) != '\0' ; i++) {
        sum += *(even + i);
    }
    
    for (int i = 0; *(odd + i) != '\0' ; i++) {
        sum += *(odd + i);
    }
    
    return sum;
}

void printOutEvenOdd(int *even, int *odd){
    
    puts("Even number are ...\n");
    for (int i = 0; *(even + i) != '\0' ; i++) {
        printf("%d, ",*(even + i));
    }
    
    puts("\n");
    
    puts("Odd number are ...\n");
    for (int i = 0; *(odd + i) != '\0' ; i++) {
        printf("%d, ",*(odd + i));
    }
    
    puts("\n");
    
}

void printOutSum(int *a){
    printf("Sum is %d\n", *a);
    
}

void mainVointerArrayExercise(){
    
    int num1, num2;
    int *evenArray;
    int *oddArray;
    int sum;
    
    puts("Enter the start num(>0) and end num(<=100) like this \' 0, 100\'");
    scanf("%d, %d",&num1, &num2);
    
    if(num1 > 0 && num2 <= 100){
        evenArray = getEven(&num1, &num2);
        oddArray = getOdd(&num1, &num2);
        
        sum = getSum(evenArray, oddArray);
        
        printOutEvenOdd(evenArray, oddArray);
        printOutSum(&sum);

    }else{
        printf("Wrong Number!!!");
    }
}

