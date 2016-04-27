//
//  Assginment1.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/26/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Assginment1.h"

void Assginment1(){
    
    //Error 1
    
    int array[3];
    //int num;
    
    printf("Enter Num\n");
    //for(int i = 0; i<5; i++){//User can input more than array's size
    for(int i = 0; i<3; i++){
        printf("Enter Number for array[%d]: ", i);
        scanf("%d",&array[i]);
    }
    
    for(int j = 0; j<5; j++){// You will get unkown value more than array's size.
         printf("%d\n",array[j]);
    }
    
    //Error 2
    int i = 5;
    int *ptr;
    
    //ptr = &i; // You will get nuknown value when if it not initialize.
    printf("\n*ptr which is not initialized is ...");
    printf("%d\n",*ptr);
    
    ptr = &i;
    printf("\n*ptr which is initialized is ...");
    printf("%d\n",*ptr);

    
    //Error3
    
    int a = 3;
    int b = 4;
    int* ptr1 = &a;
    int* ptr2 = &b;
    
    int *ptr3 = (int *) malloc(sizeof(int));
    
    int *ptr4;
    
    *ptr3  = *ptr1 + *ptr2;
    
    printf("ptr1:%d, ptr2:%d, ptr3:%d\n",*ptr1,*ptr2,*ptr3);
    
    ptr4 = ptr3;
    free(ptr3);//It is not deleted! How come??
    
    
    printf("ptr1:%d, ptr2:%d, ptr3:%d, ptr4:%d\n", *ptr1, *ptr2, *ptr3, *ptr4);


}