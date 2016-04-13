//
//  midtermProject.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/13/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "midtermProject.h"

//These guys are constant number
const int PRESET_SALARY = 500;
const int COMMISSION_RATE = 30;
const int PIECE_SALARY = 10;
const int HOUR_SALARY =20;
const int HOUR_SALARY_OVER = 30;

// This is enum of table column name
enum table_column{
    ID,//0
    TYPE,//1
    RESULT,//2
    SALARY//3
};

// This is enum of contract_type
enum contract_type{
    FULL,//0
    COMMISSION,//1
    PIECE,//2
    HOURLY,//3
    
};

// Show the result tables to the command line screen.
void showResult(int array[ROW_MID][COL_MID]){
    
    size_t i, j;
    
    printf("%8s%8s%8s%8s\n","ID","TYPE","RESULT","SALRY");
    
    for (i = 0 ; i < ROW_MID; i++) {
        for (j = 0; j < COL_MID; j++) {
            printf("%8d", array[i][j]);
        }
        puts("\n");
    }

}

// Return the number of Salary which is got by type and result.
int getSalary(int type, int result){
    
    int salary;
    
    switch (type-1) {
        case FULL:
            salary = result * PRESET_SALARY;
            break;
            
        case COMMISSION:
            salary = (int) result / 100 * COMMISSION_RATE;
            
            break;
            
        case PIECE:
            salary = result * PIECE_SALARY;
            
            break;
            
        case HOURLY:
            if (result <= 40) {
                salary = result * HOUR_SALARY;
            }else{
                salary = result * HOUR_SALARY_OVER;
                puts("He is over work in this week.");
            }
            
            break;
        default:
            break;
    }
    
    return salary;

}

// Return the number of Result that user enterd.
int getResult(int type){
    int input = 0;
    bool isCorrectInput = false;
    
    switch (type-1) {
        case FULL:
            puts("OK, He is Full time worker. How many weeks did he work?");
            puts("Type the number from 1 to whatever you want.");
            break;
            
        case COMMISSION:
            puts("OK, He is commission based worker. How much did he sale?");
            puts("Type the number from 1 to whatever you want.");
            break;
            
        case PIECE:
            puts("OK, He is Piece worker. How many product did he make?");
            puts("Type the number from 1 to whatever you want.");
            break;
            
        case HOURLY:
            puts("OK, He is Hourly worker. How many hours did he work in this week?");
            puts("Type the number from 1 to whatever you want.");
            break;
            
        default:
            break;
    }
    
    while (!isCorrectInput) {
        scanf("%d", &input);
        if (input > 0) {
            isCorrectInput = true;
        }else{
            puts("Wrong Input!! It should be from 1 !Try again!");
        }
    }
    
    return input;

}

// Return the number of TYPE that user enterd.
int getType(){
    int input = 0;
    bool isCorrectInput = false;
    while (!isCorrectInput) {
        scanf("%d", &input);
        if (input > 0 && input <=4 ) {
            isCorrectInput = true;
        }else{
            puts("Wrong Input!! It should be from 1 to 4!Try again!");
        }
    }
    
    return input;

}

// Return the number of ID that user enterd.
int getID(void){
    int input = 0;
    bool isCorrectInput = false;
    while (!isCorrectInput) {
        scanf("%d", &input);
        if (input > 0 && input <=10) {
            isCorrectInput = true;
        }else{
            puts("Wrong Input!! It should be from 1 to 10!Try again!");
        }
    }
    
    return input;
}

//This is the core function of this project.
//Youn need to call this function from main function of C system.
void mainMidtermProject(){
    
    size_t i, j;
    
    int array[ROW_MID][COL_MID];
    
    
    for (i = 0; i < ROW_MID; i++) {
        for (j = 0; j < COL_MID; j++) {
            int input;
            switch (j) {
                case ID:
                    puts("Enter the employee's ID Number from 1 to 10.");
                    input = getID();
                    
                    break;
                    
                case TYPE:
                    puts("Enter the employee's TYPE Number from 1 to 4.\n"
                         "1:Full time, 2:Commission Based, 3: Piece Work, 4: Hourly Work.");
                    input = getType();
                    
                    break;
                case RESULT:
                    puts("Enter the employee's Result Number.");
                    input = getResult(array[i][TYPE]);
                    
                    break;
                    
                case SALARY:
                    puts("Now calculating his salaries.....");
                    input = getSalary(array[i][TYPE],array[i][RESULT]);
                    printf("%d\n", input);
                    break;
                default:
                    break;
            }
            
            array[i][j] = input;
            
        }
    }
    
    showResult(array);
    
}