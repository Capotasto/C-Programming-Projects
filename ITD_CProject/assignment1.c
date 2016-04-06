//
//  assignment1.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "assingment1.h"

int getEnterNumber(){
    
    int enterNumber;
    
    scanf("%d", &enterNumber);
    
    return enterNumber;
}

void assignment1(void){
    // insert code here...
    int studentNum = 10;
    int score[studentNum];
    int sum = 0;
    double average;
    
    for(int i = 0; i < studentNum; i++){
        printf("Enter the score for Student No.%d\n",i+1);
        bool isNegativeNumber = true;
        int enterNum = 0;
        while (isNegativeNumber) {
            enterNum = getEnterNumber();
            if (0 <= enterNum && enterNum <= 100) {
                isNegativeNumber = false;
            }else{
                printf("Enter the number between 0 and 100!!!\n");
            }
        }
        score[i] = enterNum;
        
    }
    
    for (int j= 0; j <studentNum ; j++) {
        printf("Student No.%d is %d\n",j, score[j]);
        sum += score[j];
    }
    
    average = sum/studentNum;
    
    printf("The average of ten students is %f\n", average);

}

