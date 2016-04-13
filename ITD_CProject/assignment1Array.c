//
//  assignment1Array.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/12/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "assignment1Array.h"

const int ROW = 10;
const int COL = 7;

enum col_name{
    ID,//0
    ATTENDANCE,//1
    QUIZE1,//2
    QUIZE2,//3
    MID_TERM,//4
    FINAL_TEST,//5
    FINAL_MARK//6
    
};

void printResult(int array[ROW][COL]){
    size_t i, j;
    
    printf("%15s%15s%15s%15s%15s%15s%15s\n","ID","ATTENDANCE","QUIZE1","QUIZE2","MID_TERM","FINAL_TEST","FINAL_MARK");
    for (i = 0; i < ROW; i++) {
        for (j = 0 ; j < COL; j++) {
            printf("%15d",array[i][j]);
        }
        puts("\n");
    }
}

int calculateMarks(int array[ROW][COL], size_t row){
    size_t i, j;
    
    int grade = 0;
    
    for (i = 0; i < ROW; i++) {
        if (i == row) {
            for (j = 1; j < COL-1; j++) {
                grade += array[i][j];
            }
        }
    
    }
    
    return grade;
}


bool createTwoDimensionalArray(int array[ROW][COL], int row, int id){
    
    size_t i, j;
    bool result = true;
    
    for (i = 0; i < ROW; i++) {
        if (i == row) {
            if (array[i][ID] != id) {
                for (j = 0; j < COL; j++) {
                    int input;
                    bool isCorrectInput = false;
                    switch (j) {
                        case ID:
                            puts("ID is you have already desided.So ID is...");
                            input = id;
                            printf("%d\n", input);
                            break;
                            
                        case ATTENDANCE:
                            puts("Enter the mark for attendance from 0 to 10");
                            while (!isCorrectInput) {
                                scanf("%d", &input);
                                if (0 <= input && input <= 10) {
                                    isCorrectInput = true;
                                }else{
                                    puts("Wrong Value!!Try again!");
                                }
                            }
                            
                            break;
                            
                        case QUIZE1:
                            puts("Enter the mark for Quiz1 from 0 to 10");
                            while (!isCorrectInput) {
                                scanf("%d", &input);
                                if (0 <= input && input <= 10) {
                                    isCorrectInput = true;
                                }else{
                                    puts("Wrong Value!!Try again!");
                                }
                            }
                            break;
                            
                        case QUIZE2:
                            puts("Enter the mark for Quiz2 from 0 to 10");
                            while (!isCorrectInput) {
                                scanf("%d", &input);
                                if (0 <= input && input <= 10) {
                                    isCorrectInput = true;
                                }else{
                                    puts("Wrong Value!!Try again!");
                                }
                            }
                            
                            break;
                            
                        case MID_TERM:
                            puts("Enter the mark for Midterm from 0 to 30");
                            while (!isCorrectInput) {
                                scanf("%d", &input);
                                if (0 <= input && input <= 30) {
                                    isCorrectInput = true;
                                }else{
                                    puts("Wrong Value!!Try again!");
                                }
                            }
                            break;
                            
                        case FINAL_TEST:
                            puts("Enter the mark for Midterm from 0 to 40");
                            while (!isCorrectInput) {
                                scanf("%d", &input);
                                if (0 <= input && input <= 40) {
                                    isCorrectInput = true;
                                }else{
                                    puts("Wrong Value!!Try again!");
                                }
                            }
                            break;
                            
                        case FINAL_MARK:
                            //Calculating final marks
                            input = calculateMarks(array, i);
                            printf("His rank is %d!!\n", input);

                            break;
                            
                            
                        default:
                            break;
                    }
                    
                    array[i][j] = input;
                }
            }else{
                result = false;
                puts("You have already had this ID!! Try it again!");
            }
            
        }
    }
    
    return result;

}


int searchStudentId(int array[ROW], int id){
    
    int row = -1;
    size_t i;
    
    for (i =0; i < ROW; i++) {
        if (array[i] == id) {
            row = (int)i;
        }
    }
    
    return row;
    
}

int getSearchValue(size_t count){
    int input = 0;
    
    bool isCorrectId = false;
    while (!isCorrectId) {
        printf("\nEnter the Number from 100 to 999 for search StudentID. (%lu/%d)\n", count+1, ROW);
        scanf("%d", &input);
        if (100 <= input && input) {
            isCorrectId = true;
        }else{
            puts("Wrong Number!\n");
        }
    }
    
    return input;
}

void printOneDimArray(int array[ROW]){
    size_t i;
    
    for (i =0; i < ROW; i++) {
        printf("%5d", array[i]);
    }
    puts("\n");
}

void createOneDimensionalArray(int array[ROW]){
    size_t i;
    
    for (i =0; i < ROW; i++) {
        bool isCorrectId = false;
        while (!isCorrectId) {
            printf("Enter the Number from 100 to 999 for No.%ld StudentID(Don't be dupulicated!)\n", i);
            scanf("%d", &array[i]);
            if (100 <= array[i] && array[i] <1000) {
                isCorrectId = true;
            }else{
                puts("Wrong Number!");
            }
        }
    }
}

void mainAssignment1Array(void){
    
    int studentIds[ROW];
    int twoDim[ROW][COL];
    
    
    int searchId = 0;
    
    int hitRowNum = 0;
    
    size_t i;
    
    
    //Creating and initializing the one dimensional array
    createOneDimensionalArray(studentIds);
    
    //Print all of one dimentional array
    printOneDimArray(studentIds);
    
    for (i = 0; i < ROW; i++) {
        bool isCreateDone = false;
        
        while(!isCreateDone){
            bool isSearchDone = false;
            while (!isSearchDone) {
                //Get id from the user
                searchId = getSearchValue(i);
                //Finding Students in one Dimensional Array
                hitRowNum = searchStudentId(studentIds, searchId);
                if (hitRowNum >= 0) {
                    isSearchDone = true;
                    puts("Find it!");
                }else{
                    puts("No result!! Try again");
                }
                
            }
            
            //Initializing the two dimensional array
            isCreateDone = createTwoDimensionalArray(twoDim, hitRowNum, searchId);
            
        }
    }
    
    //Printing
    printResult(twoDim);

}
