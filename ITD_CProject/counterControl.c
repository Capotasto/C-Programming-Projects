//
//  counterControl.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "counterControl.h"

void counterControl(void){
    int int1;
    
    printf("Enter the number int1(1:*, 2:/, 3:+, 4:-)\n");
    scanf("%d", &int1);
    
    unsigned int i = 1;
    for (i = 1; i <= 10; i++) {
        switch (int1) {
            case 1:
                printf("%d * %u = %f\n",int1, i, (double)int1*i);
                break;
                
            case 2:
                printf("%d / %u = %f\n",int1, i, (double)int1/i);
                break;
                
            case 3:
                printf("%d + %u = %f\n",int1, i, (double)int1+i);
                break;
                
            case 4:
                printf("%d - %u = %f\n",int1, i, (double)int1-i);
                break;
                
            default:
                break;
        }
    }
}
