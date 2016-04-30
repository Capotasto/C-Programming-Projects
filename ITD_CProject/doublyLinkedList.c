//
//  doublyLinkedList.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/29/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "doublyLinkedList.h"

enum option_double_linked_list{
    ADD_FRONT,//0
    ADD_BACK,//1
    DELETE_SPECIFIC,//2
    PRINT_FORWARD,//3
    PRINT_BACKWARD,//4
    CLOSE//5
};

struct ListNodeForDouble{
    int data;
    struct ListNodeForDouble *nextPtr;
    struct ListNodeForDouble *prePtr;
    
    
};

typedef struct ListNodeForDouble ListNodeDouble;

void instructionForDouble(){
    puts("Enter your choice:\n"
         " 1: Add a node to the front of the list\n"
         " 2: Add a node to the back of the list\n"
         " 3: Delete a node froma specific locationin the list\n"
         " 4: Print a list forward\n"
         " 5: Print a list backward\n"
         " 6: Close this application."
         );
}

void printListForward(ListNodeDouble * startPtr){
    
    if(startPtr == NULL){
        puts("Lis is Empty.");
    }else{
        puts("This list is: ");
        
        while (startPtr != NULL) {
            printf("%d ---> ", startPtr->data);
            startPtr = startPtr->nextPtr;
        }
        puts("NULL");
    }
}

void printListBackward(ListNodeDouble * endPtr){

    if(endPtr == NULL){
        puts("Lis is Empty.");
    }else{
        puts("This list is: ");
        printf("NULL ");
        while (endPtr != NULL) {
            printf("---> %d ", endPtr->data);
            endPtr = endPtr->prePtr;
        }
        puts("");
    }

}

void insertDobleListFront(ListNodeDouble** startPtrAddress, ListNodeDouble** endPtrAddress, int num){
    
    ListNodeDouble *newPtr;
    ListNodeDouble *currentPtr;
    ListNodeDouble *nextPtr = NULL;
    
    newPtr = (ListNodeDouble* )malloc(sizeof(ListNodeDouble));
    
    if (newPtr == NULL) {
        printf("%d not inserted. No memory available.\n ", num);
        return;
    }
    
    newPtr->data = num;
    newPtr->nextPtr = NULL;
    newPtr->prePtr = NULL;
    currentPtr = *startPtrAddress;
    
    if (currentPtr != NULL) {
        nextPtr = currentPtr;
        nextPtr->prePtr = newPtr;
        newPtr->nextPtr = nextPtr;
        *startPtrAddress = newPtr;
        
        
    }else{
        *startPtrAddress = newPtr;
        *endPtrAddress = newPtr;
    }
    
}

void insertDobleListBack(ListNodeDouble** startPtrAddress, ListNodeDouble** endPtrAddress, int num){

    ListNodeDouble *newPtr;
    ListNodeDouble *currentPtr;
    ListNodeDouble *previousPtr = NULL;
    
    newPtr = (ListNodeDouble* )malloc(sizeof(ListNodeDouble));
    
    if (newPtr == NULL) {
        printf("%d not inserted. No memory available.\n ", num);
        return;
    }
    
    newPtr->data = num;
    newPtr->nextPtr = NULL;
    newPtr->prePtr = NULL;
    currentPtr = *endPtrAddress;
    
    if (currentPtr != NULL) {
        previousPtr = currentPtr;
        previousPtr->nextPtr = newPtr;
        newPtr->prePtr = previousPtr;
        *endPtrAddress = newPtr;
        
        
    }else{
        *startPtrAddress = newPtr;
        *endPtrAddress = newPtr;
    }
}

char deleteNodeSpecificPostion(ListNodeDouble** startPtrAddress, ListNodeDouble** endPtrAddress, int num){
    
    int i = 0;
    
    ListNodeDouble *currentPtr;
    ListNodeDouble *previousPtr = NULL;
    
    currentPtr = *startPtrAddress;
    
    while (currentPtr != NULL && i != num) {
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
        i++;
    }
    
    if (currentPtr == NULL) {
        return '\0';
    }
    
    ListNodeDouble *tempPtr = currentPtr;
    currentPtr = currentPtr->nextPtr;
    if (previousPtr != NULL) {
        previousPtr->nextPtr = currentPtr;
    }else{
        *startPtrAddress = currentPtr;
    }
    
    if (currentPtr != NULL) {
        currentPtr->prePtr = previousPtr;
    }else{
        *endPtrAddress = currentPtr;
    }
    free(tempPtr);
    
    return num;
}

void doublyLinkedList(){
    
    ListNodeDouble *startPtr = NULL;
    ListNodeDouble *endPtr = NULL;
    ListNodeDouble **startPtrAddress = &startPtr;
    ListNodeDouble **entPtrAddress = &endPtr;
    
    size_t choise;
    int input;
    instructionForDouble();
    
    while (choise-1 != CLOSE) {
        printf("Which option do you want to?: ");
        scanf("%zu", &choise);
        
        switch (choise-1) {
            case ADD_FRONT:
                printf("\nEnter the Number to add forth: ");
                getchar();
                scanf("%d", &input);
                insertDobleListFront(startPtrAddress, entPtrAddress, input);
                printListForward(startPtr);
                break;
                
            case ADD_BACK:
                printf("\nEnter the Number to add back: ");
                getchar();
                scanf("%d", &input);
                insertDobleListBack(startPtrAddress, entPtrAddress, input);
                printListForward(startPtr);

                break;

            case DELETE_SPECIFIC:
                if (startPtr != NULL && endPtr != NULL) {
                    printf("\nEnter the Number of location that you wanna delete : ");
                    getchar();
                    scanf("%d", &input);
                    char result;
                    result = deleteNodeSpecificPostion(startPtrAddress, entPtrAddress, input);
                    if (result == '\0') {
                        puts("Wrong Location!\n");
                    }
                }else{
                    puts("List is Empty.");
                }
                printListForward(startPtr);
                break;

                
            case PRINT_FORWARD:
                printListForward(startPtr);
                break;

                
            case PRINT_BACKWARD:
                printListBackward(endPtr);
                break;

            case CLOSE:
                break;
                
            default:
                break;
        }
        
    }
    
}