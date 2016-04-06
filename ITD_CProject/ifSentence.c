//
//  ifSentence.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "ifSentence.h"

void ifSentence(void){
    int int1;
    int int2;
    
    printf("Enter the score int1\n");
    scanf("%d", &int1);
    printf("Enter the score int2\n");
    scanf("%d", &int2);
    
    if(int1 == int2){
        printf("int1 is equal to int2\n");
    }else if (int1 != int2){
        printf("int1 is not or equal to int2\n");
    }else if (int1 <= int2){
        printf("int1 is less than or equal to int2\n");
    }else if (int1 >= int2){
        printf("int1 is greater than equal to int2\n");
    }else if (int1 < int2){
        printf("int1 is less than int2\n");
    }else if (int1 > int2){
        printf("int1 is greater than int2\n");
    }
}