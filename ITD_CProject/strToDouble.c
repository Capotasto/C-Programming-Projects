//
//  strToDouble.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/20/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "strToDouble.h"

void mainStrToDouble(){
    
    const char *string = "51.2% are admitted to 62.4%.";
    const char *string2 = "-1234567abc";
    
    double d;
    long l;
    char* stringPtr, * stringToLongPtr;
    
    d = strtod(string, &stringPtr);
    l = strtol(string2, &stringToLongPtr, 0);
    
    printf("string is %s\n", string);
    printf("d is %.2f\n", d);
    printf("stringPtr is %s\n", stringPtr);
    
    printf("string is %s\n", string2);
    printf("l is %ld\n", l);
    printf("stringPtr is %s\n", stringToLongPtr);
    

    
}