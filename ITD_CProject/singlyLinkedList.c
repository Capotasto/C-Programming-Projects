//
//  singlyLinkedList.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/28/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "singlyLinkedList.h"



struct ListNode{
    char data;
    struct ListNode *nextPtr;

};

typedef struct ListNode ListNode;
//typedef ListNode* ListNodePtr;

void instruction(){
    puts("Enter your choice:\n"
         " 1: to insert an element into the list\n"
         " 2: to delete an element from the list\n"
         " 3: to end.\n");
}

ListNode* insert(ListNode *startPtr, char item){
    
    ListNode* newPtr;
    ListNode* previousPtr;
    ListNode* nextPtr;
    ListNode* currentPtr;
    
    newPtr = (ListNode* )malloc(sizeof(ListNode));
    
    if (newPtr != NULL) {
        newPtr->data = item;
        newPtr->nextPtr = NULL;
        previousPtr = NULL;
        currentPtr = startPtr;
        
        while (currentPtr != NULL && item > currentPtr->data) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        
        if (previousPtr == NULL) {
            newPtr->nextPtr = startPtr;
            startPtr = newPtr;
        }else{
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        
        }
        printf("startPtr is %p.\n ", startPtr);
        printf("newPtr is %p.\n ", newPtr);
        printf("previousPtr is %p.\n ", previousPtr);
        printf("currentPtr is %p.\n ", currentPtr);
        
        
    }else{
        printf("%c not inserted. No memory available.\n ", item);
    }
    
    return startPtr;
    
}

void printList(ListNode * startPtr){
    
    if(startPtr == NULL){
        puts("Lis is Empty.");
    }else{
        puts("This list is: ");
        
        while (startPtr != NULL) {
            printf("%c ---> ", startPtr->data);
            startPtr = startPtr->nextPtr;
        }
        puts("NULL");
    }
}

char delete(ListNode** startPtr, char item){
    
    ListNode *currentPtr;
    ListNode *previousPtr;
    
    if (item == (*startPtr)->data) {
        ListNode *tempPtr = *startPtr;
        *startPtr = (*startPtr)->nextPtr;
        free(tempPtr);//delete here
        return item;
    }else{
        previousPtr = *startPtr;
        currentPtr = (*startPtr)->nextPtr;
        
        while (currentPtr != NULL && currentPtr->data != item) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        
        if (currentPtr != NULL && item == currentPtr->data) {
            ListNode *tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            currentPtr = currentPtr->nextPtr;
            free(tempPtr);
            return item;
        }
    }
    return '\0';
}

void mainSinglyLinkedList(){

    ListNode *startPtr = NULL;
    ListNode **startPtrAddress = &startPtr;
    
    size_t choise;
    char item;
    
    while (choise != 3) {
        instruction();
        printf("? ");
        scanf("%zu", &choise);

        switch (choise) {
            case 1:
                printf("\nEnter the Character: ");
                getchar();
                scanf("%c", &item);
                startPtr = insert(startPtr, item);
                printList(startPtr);
                break;
                
            case 2:
                if (startPtr != NULL) {
                    printf("\nEnter character to be deleted: ");
                    getchar();
                    scanf("%c", &item);
                    if (delete(startPtrAddress, item)) {
                        printf("%c deleted.\n", item);
                        printList(startPtr);
                    }
                }else{
                    printf("List is Empty\n");
                }
                break;
            default:
                puts("Invalid choice.\n");
                instruction();
                break;
        }
    }
}