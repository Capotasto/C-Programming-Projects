//
//  diementionalArray.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/12/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "diementionalArray.h"


void mainDimentionalArray(void){
    
    
    int a[ROW][COL];
    int col[COL];
    
    size_t i, j;
    
    
    for(i = 0; i < ROW; i++){
        getArrayValues(i, col);
        for (j = 0; j < COL; j++) {
            a[i][j] = col[j];
        }
    }
    
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            if(j == COL-1){
                printf("%3d\n", a[i][j]);
            }else{
                printf("%3d", a[i][j]);
            }
        }
    }
}

void getArrayValues(size_t x, int col[COL]){
    
    size_t i;
    
    for (i = 0; i < COL; i++) {
        printf("Enter the num that you like for %ld Row and %ld Col.\n", x, i);
        scanf("%d", &col[i]);
    }
}