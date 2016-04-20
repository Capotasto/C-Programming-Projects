//
//  Assingment2.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/19/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Assingment2.h"

const int ROW_A2 = 4;
const int COL_A2 = 5;

enum option_type{
    INSERT,//0
    MOD_SPECIFIC,//1
    MOD_FIRST_TWO,//2
    MOD_LAST_TOW,//3
    MOD_MIDDLE,//4
    SEARCH,//5
    PRINT//6
};

void printArray(int array[ROW_A2][COL_A2]){
    puts("\nThis is your Array!!!");
    for (int i = 0; i < ROW_A2; i++) {
        for (int j = 0; j < COL_A2; j++) {
            printf("%6d", array[i][j]);
        }
        puts("\n");
    }
}

bool checkArray(int array[ROW_A2][COL_A2]){
    
    for (int i = 0; i < ROW_A2; i++) {
        for (int j = 0; j < COL_A2; j++) {
            if (array[i][j] == '\0') {
                return false;
            }
        }
    }
    
    return true;
}

void insertNumToArray(int array[ROW_A2][COL_A2]){
    
    for (int i = 0; i < ROW_A2; i++) {
        for (int j = 0; j < COL_A2; j++) {
            printf("Enter the num for array[%d][%d](> 0):",i, j);
            scanf("%d", &array[i][j]);
            if (array[i][j] <= 0) {
                puts("The number should be over 0!!!Try again!");
                j--;
            }
        }
        
    }
    
}

void modifyArraySpecifically(int array[ROW_A2][COL_A2]){
    
    if (checkArray(array)) {
        int row=0, col=0, newData = 0;
        bool isCollectPosition = false;
        while (!isCollectPosition) {
            printf("\nEnter two number for Row ,Column and new data that you want to change.like this \'1, 2, 10\' (0 <= ROW <= %d, 0 <= COL <= %d, 0 < NEWDATA).\n", ROW_A2-1, COL_A2-1);
            scanf("%d, %d, %d", &row, &col, &newData);
            
            if (row < 0 || ROW_A2-1 < row || col < 0 || COL_A2-1 < col || newData < 0) {
                puts("Wrong number!!Make sure the range!!");
            }else{
                isCollectPosition = true;
            }
        }
        puts("This is previous data array.");
        printArray(array);
        
        array[row][col] = newData;
        
        puts("This is changed data array.");
        printArray(array);
        
    }else{
        puts("You need to choose No.1 first!!!");
    }
    
}


void showOption(){
    puts("\n\nPlease select your choice:\n"
         "1: Insert data into the multidimensional array\n"
         "2: Modify a data at a specific location\n"
         "3: Modify an input in the first two columns of the array\n"
         "4: Modify an input in the last two columns of the array\n"
         "5: Modify an input in the middle column of the array\n"
         "6: Find an input\n"
         "7: Print the array");
    
}

void modifyArrayFirstTwoColmun(int array[ROW_A2][COL_A2]){
    
    if (checkArray(array)) {
        int row=0, col=0, newData = 0;
        bool isCollectPosition = false;
        while (!isCollectPosition) {
            printf("\nWhich row(0 to 3) and column(0 or 1) do you wand modify? And enter the new data number as well.\nlike this \'0, 2, 10\' \n");
            scanf("%d, %d, %d", &row, &col, &newData);
            
            if (row < 0 || ROW_A2-1 < row || col < 0 || 1 < col || newData < 0) {
                puts("Wrong number!!Make sure the range!!");
            }else{
                isCollectPosition = true;
            }
        }
        
        puts("This is previous data array.");
        printArray(array);
        
        array[row][col] = newData;
        
        puts("This is changed data array.");
        printArray(array);
        
    }else{
        puts("You need to choose No.1 first!!!");
    }
    
    
}

void modifyArrayLastTwoColmun(int array[ROW_A2][COL_A2]){
    if (checkArray(array)) {
        int row=0, col=0, newData = 0;
        bool isCollectPosition = false;
        while (!isCollectPosition) {
            printf("\nWhich row(0 to 3) and column(3 or 4) do you wand modify? And enter the new data number as well.\nlike this \'0, 3, 10\' \n");
            scanf("%d, %d, %d", &row, &col, &newData);
            
            if (row < 0 || ROW_A2-1 < row || col < 3 || COL_A2 < col || newData < 0) {
                puts("Wrong number!!Make sure the range!!");
            }else{
                isCollectPosition = true;
            }
        }
        
        puts("This is previous data array.");
        printArray(array);
        
        array[row][col] = newData;
        
        puts("This is changed data array.");
        printArray(array);
    }else{
        puts("You need to choose No.1 first!!!");
    }
}

void modifyArrayMiddleColmun(int array[ROW_A2][COL_A2]){
    if (checkArray(array)) {
        const int MIDDLE = 2;
        int row=0, col=MIDDLE, newData = 0;
        bool isCollectPosition = false;
        while (!isCollectPosition) {
            printf("\nColumn is constant(2).Which row(0 to 3) do you wand modify? And enter the new data number as well.\nlike this \'0, 10\' \n");
            scanf("%d,%d", &row, &newData);
            
            if (row < 0 || ROW_A2-1 < row || newData < 0) {
                puts("Wrong number!!Make sure the range!!");
            }else{
                isCollectPosition = true;
            }
        }
        
        puts("This is previous data array.");
        printArray(array);
        
        array[row][col] = newData;
        
        puts("This is changed data array.");
        printArray(array);
        
    }else{
        puts("You need to choose No.1 first!!!");
        
    }
}

void searchValue(int array[ROW_A2][COL_A2]){
    if (checkArray(array)) {
        
        int value = 0;
        bool isCollectPosition = false;
        while (!isCollectPosition) {
            
            printf("\nEnter the number that you want to find it in the array.\n");
            scanf("%d", &value);
            
            if (value > 0) {
                isCollectPosition = true;
            }else{
                puts("Wrong number!!Make sure the range!!");
            }
        }
        
        bool isFoundValue = false;
        for (int i = 0; i < ROW_A2; i++) {
            for (int j = 0; j < COL_A2; j++) {
                if (value == array[i][j]) {
                    printf("It's found! %d is in the array[%d][%d]\n",value, i, j);
                    isFoundValue = true;
                }
            }
        }
        
        if (!isFoundValue) {
            puts("It didn't be found.");
        }
        
        
    }else{
        puts("You need to choose No.1 first!!!");
        
    }
}



void mainAssignment2(){
    
    int array[ROW_A2][COL_A2];
    int optionNum;
    void (*func_ptr[])(int[ROW_A2][COL_A2]) =
        {insertNumToArray,
        modifyArraySpecifically,
        modifyArrayFirstTwoColmun,
        modifyArrayLastTwoColmun,
        modifyArrayMiddleColmun,
        searchValue, printArray};
    
    while(1){
        showOption();
        printf("You're gonna choose No....: ");
        scanf("%d", &optionNum);
        if (1 <= optionNum && optionNum <=7) {
            switch (optionNum-1) {
                case INSERT:
                    func_ptr[INSERT](array);
                    func_ptr[PRINT](array);
                    break;
                case MOD_SPECIFIC:
                    func_ptr[MOD_SPECIFIC](array);
                    break;
                case MOD_FIRST_TWO:
                    func_ptr[MOD_FIRST_TWO](array);
                    break;
                case MOD_LAST_TOW:
                    func_ptr[MOD_LAST_TOW](array);
                    break;
                case MOD_MIDDLE:
                    func_ptr[MOD_MIDDLE](array);
                    break;
                case SEARCH:
                    func_ptr[SEARCH](array);
                    break;
                case PRINT:
                    func_ptr[PRINT](array);
                    break;
            }
        }else{
            puts("Wrong Num!!!");
        }
        
    }
}