//
//  loopBreak.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/7/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "loopBreak.h"

void loopBreak(void){
    
    unsigned int x;
    
    for (x = 1; x <= 10; x++) {
        if (x ==5) {
            //break;
            continue;
        }
        printf("%u", x);
    }
    printf("\n Break out of loop at x == %u\n", x);

}