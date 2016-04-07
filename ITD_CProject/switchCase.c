//
//  switchCase.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/7/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "switchCase.h"

void switchCase(void){

    int grade;
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int eCount = 0;
    unsigned int fCount = 0;
    
    puts("Enter the letter grades.");
    puts("Enter the EOF character(Mac: Ctrl+D, Win: Ctrl+Z) to ent input.");
    
    while((grade = getchar()) != EOF){//EOF is Ctrl + D.
        switch (grade) {
            case 'A':
            case 'a':
                aCount++;
                break;
                
            case 'B':
            case 'b':
                bCount++;
                break;
                
            case 'C':
            case 'c':
                cCount++;
                break;
                
            case 'D':
            case 'd':
                dCount++;
                break;
                
            case 'E':
            case 'e':
                eCount++;
                break;
                
            case 'F':
            case 'f':
                fCount++;
                break;
                
            case '\n':
            case '\t':
            case ' ':
                break;
                
            default:
                puts("Incorrect letter grade entered");
                puts("Enter a new grade.");
                
                break;
        }
    }
    
    printf("A count is %d\n", aCount);
    printf("B count is %d\n", bCount);
    printf("C count is %d\n", cCount);
    printf("D count is %d\n", dCount);
    printf("E count is %d\n", eCount);
    printf("F count is %d\n", fCount);
    
}