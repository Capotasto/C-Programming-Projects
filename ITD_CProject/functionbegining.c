//
//  functionbegining.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/7/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "functionbegining.h"



void functionbegining() {
    int x = 0;
    
    for (x = 1; x < 10 ; x++) {
        printf("%d\n", square(x));
    }
}

int square(int x){

    return x * x;
}