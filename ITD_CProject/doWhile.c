//
//  doWhile.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/7/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "doWhile.h"

void doWhile(void){
    unsigned int counter = 1;

    do{
        printf("%u \n", counter);
    }while(++counter <= 10);
}