//
//  pointerBeginning.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/12/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "pointerBeginning.h"

void mainPointerBeginning(){
    
    int a;
    int *aPtr;
    
    a =7;
    aPtr = &a;
    
    printf("The address of a is %p\n" "The value of aPtr is %p\n",&a , aPtr);
    printf("The value of a is %d\n" "The value of *aPtr is %d\n",a , *aPtr);
    printf("Showing that * and & are complements of each other \n *&aPtr = %p\n&*aPtr = %p\n",*&aPtr , &*aPtr);
}
