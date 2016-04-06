//
//  evenNumberOddNumber.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "evenNumberOddNumber.h"

void evenNumberOddNumber(void){
    
    int int1 = 0;
    int sum = 0;
    
    printf("Which Number do you need? Enter the number for int1(1:Even, 2:Odd)\n");
    scanf("%d", &int1);
    
    if (int1 == 1) {
        for (int i = 2; i <= 100; i += 2) {
            sum += i;
            printf("i is %d\n",i);
            printf("Sum is %d\n\n",sum);
        }
        
    }else if(int1 == 2){
        for (int i = 1; i <= 100; i += 2) {
            sum += i;
            printf("i is %d\n",i);
            printf("Sum is %d\n\n",sum);
        }
    }
}



