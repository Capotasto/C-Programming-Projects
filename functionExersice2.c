//
//  functionExersice2.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/7/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "functionExersice2.h"

void functionExersice2(void){
    
    ascengingNum();
    descengingNum();
    
}

void ascengingNum(){
    
    printf("Start ascending\n");
    for (int i = 21; i <= 30; i++) {
        printf("%d\n", i);
    }
}

void descengingNum(){
    
    printf("Start decending\n");
    for (int i = 30; i >= 21; i--) {
        printf("%d\n", i);
    }
}