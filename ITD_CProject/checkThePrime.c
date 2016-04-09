//
//  checkThePrime.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/8/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "checkThePrime.h"

void checkThePrime(void){
    
    int int1;
    
    printf("Enter the some number\n");
    scanf("%d", &int1);
    
    if(isPrimeNumber(int1)){
     printf("The number %d you entered is Prime!\n", int1);
    
    }else{
     printf("The number %d you entered is not Prime!\n", int1);
    
    }

}

bool isPrimeNumber(int x){
    
    bool isPrime = true;
    
    for (int i =2; i < x; i++) {
        if(x % i == 0){
            isPrime = false;
            printf("%d can be devided %d!!\n", i, x);
        }
    }
    
    return isPrime;
    
}

