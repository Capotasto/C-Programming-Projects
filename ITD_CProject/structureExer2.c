//
//  structureExer2.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/28/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "structureExer2.h"

const int STUDENT = 3;

struct Student {
    size_t id;
    char name[30];
    char lname[30];
    size_t age;
    float gpa;
    char program[30];
    
};

typedef struct Student Student;

void printStudent(struct Student *student){
    
    puts("");
    printf("Student id is %zu\n", student->id);
    printf("Student name is %s", student->name);
    printf("Student lname is %s", student->lname);
    printf("Student age is %zu\n", student->age);
    printf("Student gpa is %f\n", student->gpa);
    printf("Student program is %s", student->program);
    
}

void searchStudent(struct Student *student){
    
    int searchNum;

    printf("\nEnter some number to serach student: ");
    scanf("%d", &searchNum);
    
    for (int i = 0; i < STUDENT; i++) {
        if ((student+i)->id == searchNum) {
            printStudent(&student[i]);
        }
    }
}

void  modifyStudent(struct Student *student){
    int searchNum;
    
    printf("\nEnter some number to modify student data: ");
    scanf("%d", &searchNum);
    
    for (int i = 0; i < STUDENT; i++) {
        if ((student+i)->id == searchNum) {
            printf("\nEnter the student information for Student id = %zu: \n", (student+i)->id);
            
            printf("Student[%d] id (%zu): ", i, (student+i)->id);
            scanf("%zu", &student[i].id);
            
            printf("Student[%d] name(%s) : ", i, (student+i)->name);
            //getchar();
            //fgets(student[i].name, sizeof(student[i].name), stdin);
            scanf("%s", student[i].name);
            
            printf("Student[%d] last name(%s) : ", i, (student+i)->lname);
            getchar();
            fgets(student[i].lname, sizeof(student[i].lname), stdin);
            
            printf("Student[%d] age (%zu): ", i, (student+i)->age);
            scanf("%zu", &student[i].age);
            
            printf("Student[%d] gpa (%f): ", i, (student+i)->gpa);
            scanf("%f", &student[i].gpa);
            
            printf("Student[%d] program (%s): ", i, (student+i)->program);
            getchar();
            fgets(student[i].program, sizeof(student[i].program), stdin);
        }
    }
}

void structureExer2(){
    
    Student student[STUDENT];
    //int searchNum;
    
    for (int i = 0; i < STUDENT; i++) {
        printf("\nEnter the student information for StudentNo %d: \n", i);
        
        printf("Student[%d] id (Number): ", i);
        scanf("%zu", &student[i].id);
        
        printf("Student[%d] name(Charactor) : ", i);
        getchar();
        fgets(student[i].name, sizeof(student[i].name), stdin);
        
        printf("Student[%d] last name(Charactor) : ", i);
        getchar();
        fgets(student[i].lname, sizeof(student[i].lname), stdin);
        
        printf("Student[%d] age (Number): ", i);
        scanf("%zu", &student[i].age);
        
        printf("Student[%d] gpa (Number): ", i);
        scanf("%f", &student[i].gpa);
        
        printf("Student[%d] program ()Charactor: ", i);
        getchar();
        fgets(student[i].program, sizeof(student[i].program), stdin);

    }
    
    searchStudent(student);
    
    int c;
    printf("You wanna chage some student's data? (Y/N)");
    getchar();
    c = getchar();
    if (c == 'Y') {
        modifyStudent(student);
    }
    c = 0;
    printf("You wanna print all students? (Y/N)");
    getchar();
    do {
        c = getchar();
    } while (c == 10);
    
    if (c == 'Y') {
        for (int i = 0; i < STUDENT; i++) {
            printStudent(&student[i]);
        }
    }
    

}