//
//  whileRepetition.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "whileRepetition.h"

void whileRepetition(void){
    int int1;
    printf("Enter the number int1\n");
    scanf("%d", &int1);
    
    int i = 1;
    while(i < 50){
        printf("%d multiply by %d equal to %d\n",int1, i, int1 * i);
        i++;
    }
}
