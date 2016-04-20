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
        
    }else{
        puts("");
    }
    


}


void showOption(){
    puts("Please select your choice:\n"
    "1: Insert data into the multidimensional array\n"
    "2: Modify a data at a specific location\n"
    "3: Modify an input in the first two columns of the array\n"
    "4: Modify an input in the last two columns of the array\n"
    "5: Modify an input in the middle column of the array\n"
    "6: Find an input\n"
    "7: Print the array");
    
}

void printArray(int array[ROW_A2][COL_A2]){
    puts("\nThis is your Array!!!");
    for (int i = 0; i < ROW_A2; i++) {
        for (int j = 0; j < COL_A2; j++) {
            printf("%3d", array[i][j]);
        }
        puts("\n");
    }
}

void mainAssignment2(){
    
    int array[ROW_A2][COL_A2];
    int optionNum;
    bool isOptionEntered = false;
    bool isArrayEntered = false;
    void (*func_ptr[])(int) ={insertNumToArray, insertNumToArray};
    
    while(0){
        showOption();
        printf("You're gonna choose No....: ");
        scanf("%d", &optionNum);
        if (1 <= optionNum && optionNum <=7) {
            switch (optionNum+1) {
                case INSERT:
                    insertNumToArray(array);
                    printArray(array);
                    break;
                case MOD_SPECIFIC:
                    modifyArraySpecifically(array);
                    break;
                case MOD_FIRST_TWO:
                    
                    break;
                case MOD_LAST_TOW:
                    
                    break;
                case MOD_MIDDLE:
                    
                    break;
                case SEARCH:
                    
                    break;
                case PRINT:
                    
                    break;
            }
        }else{
            puts("Wrong Num!!!");
        }

    }
    
    showOption();
    
    while (!isOptionEntered) {
        scanf("%d", &optionNum);
        if (optionNum != INSERT) {
            
        }else{
            if (isArrayEntered) {
                <#statements#>
            }
            
            if (checkInputNum(optionNum)){
                isOptionEntered = true;
            }

        }
    }
    
    while (!isEntered) {
        insertNumToArray(array);
        if(checkArray(array)){
            isEntered = true;
        }
    }
    
    
    
    printArray(array);
    
    
    isEntered = false;
    while (!isEntered) {
        scanf("%d", &optionNum);
        if (1 <= optionNum && optionNum <=7) {
            isEntered = true;
        }else{
            puts("Wrong Num!!!");
        }
    }
    
    
    
    
    
    
   
    

}