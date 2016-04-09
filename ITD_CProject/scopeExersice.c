//
//  scopeExersice.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/8/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "scopeExersice.h"

void scopeExersice(void){
    
    int x = 5;
    
    printf("Local x in outer scope of main is %d\n", x);
    
    {
        int x =7;
        printf("Local x in outer scope of main is %d\n", x);
    }
    
    printf("Local x in outer scope of main is %d\n", x);
    
    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();
    
    printf("\nLocal x in outer scope of main is %d\n", x);
}

void useLocal(void){
    int x = 25;
    printf("\nlocal x is %d on entering useLocal\n", x);
    ++x;
    printf("local x is %d on entering useLocal\n", x);
    
}

void useStaticLocal(void){
    static int x = 50;
    printf("\nlocal static x is %d on entering useStaticLocal\n", x);
    --x;
    printf("local static x is %d on entering useStaticLocal\n", x);
    
}

//void useGlobal(void){
//    printf("\nglobal x is %d on entering useGrobal\n", x);
//    x *= 10;
//    printf("\nglobal x is %d on entering useGrobal\n", x);
//}