//
//  structureExer.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/27/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "structureExer.h"

struct Book{
    char title[30];
    char author[30];
    char subject[20];
    int id;
    
};

struct Course{
    size_t midterm;
    size_t final;

};

void printBook(struct Book book){
    
    printf("Title : %s\n", book.title);
    printf("Author : %s\n", book.author);
    printf("Subject : %s\n", book.subject);
    printf("Id : %d\n", book.id);

}

void structureExer1(){

    struct Book book;
    struct Book *bookPtr;
    
    printf("Enter the book title: ");
    fgets(book.title, sizeof(book.title)/sizeof(char), stdin);
    
    printf("Enter the book author: ");
    fgets(book.author, sizeof(book.author)/sizeof(char), stdin);
    
    printf("Enter the book subject: ");
    fgets(book.subject, sizeof(book.subject)/sizeof(char), stdin);
    
    printf("Enter the Id: ");
    scanf("%d", &book.id);
    
    printBook(book);
    
    bookPtr = &book;
    
    strcpy(bookPtr->title, "This is C");
    strcpy(bookPtr->author, "Norio Egi");
    strcpy(bookPtr->subject, "Oh good book");
    bookPtr->id = 1999;
    
    printBook(book);
    
}

void printCoursse(struct Course *ptr){
    
    printf("Course midterm is : %zu\n", ptr->midterm);
    printf("Course midterm is : %zu\n", ptr->final);
}

void modifyCorse(struct Course *ptr){

    
    printf("Enter the number to modify for midterm: ");
    scanf("%zu", &ptr->midterm);
    
    printf("Enter the number to modify for final: ");
    scanf("%zu", &ptr->final);

}

void sumCourse(struct Course *ptr, struct Course *ptr2){
    
    printf("Ptr->midterm : %zu\n",ptr->midterm);
    printf("Ptr->final : %zu\n",ptr->final);
    printf("Ptr2->midterm : %zu\n",ptr2->midterm);
    printf("Ptr2->final : %zu\n",ptr2->final);
    printf("Sum(Course(prev) + Couser(after))/2 = %zu\n",
           (ptr->midterm+ptr->final+ptr2->midterm+ptr2->final)/2);
    
}

void structureExer2_0427(){

    struct Course mCorse;
    struct Course mCorse2;
    struct Course *coursePtr;
    struct Course *coursePtr2;
    
    printf("Enter the number for midterm: ");
    scanf("%zu", &mCorse.midterm);
    
    printf("Enter the number for final: ");
    scanf("%zu", &mCorse.final);
    
    coursePtr = &mCorse;
    
    printCoursse(coursePtr);
    
    coursePtr2 = &mCorse2;
    
    modifyCorse(coursePtr2);
    
    printCoursse(coursePtr);
    
    sumCourse(coursePtr, coursePtr2);

}

void structureExer(){
    
    //structureExer1();
    structureExer2_0427();
}