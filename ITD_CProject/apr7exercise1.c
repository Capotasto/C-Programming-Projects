//
//  apr7exercise1.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/7/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "apr7exercise1.h"

void apr7exercise1(void){
    
    unsigned int x;
    unsigned int y;
    
    for (x = 1; x < 16; x++) {
        if(7 < x && x <= 16){
            y = x + 13;
            if(25 < y && y < 29){
                printf("%d\n", y-18);
                continue;
            }else if (29 <= y){
                break;
            }
            printf("%d\n", y);
            continue;
        }
        printf("%d\n", x);
    }

}