//
//  checkTheLocationArray.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/11/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "checkTheLocationArray.h"
#define MAX_NUM 10

void checkTheLocationArray(void){
    
    int a[MAX_NUM];
    int findNum = 0;
    
    getValue(a, MAX_NUM);
    
    printf("Enter the number that you want to find...\n");
    scanf("%d", &findNum);
    
    findValue(a, findNum);
    
}

void getValue(int array[], int num){
    
    printf("Enter the num %d times\n", MAX_NUM);
    for (int i = 0; i < MAX_NUM; i++) {
        scanf("%d", &array[i]);
    }
    
}

void findValue(int array[], int num){
    
    bool isFound = false;
    
    for (int i = 0; i < MAX_NUM; i++) {
        if (array[i] == num) {
            printf("Find %d at the %d in the array!\n",num, i);
            isFound = true;
        }
    }
    
    if (!isFound) {
        printf("There is no %d in the array!\n",num);

    }

}