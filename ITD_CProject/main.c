//
//  main.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include <stdio.h>
#include "assingment1.h"
#include "increment.h"
#include "whileRepetition.h"
#include "ifSentence.h"
#include "evenNumberOddNumber.h"
#include "switchCase.h"
#include "doWhile.h"
#include "loopBreak.h"
#include "apr7exercise1.h"
#include "functionbegining.h"
#include "functionThreeNumberCompare.h"
#include "functionExersice2.h"
#include "checkThePrime.h"
#include "scopeExersice.h"
#include "arrayExersice.h"

void useGlobal(void);

int x = 1; // Grobal Variable

int main(int argc, const char * argv[]) {
    
    //assignment1();
    //increment();
    //whileRepetition();
    //ifSentence();
    //counterControl();
    //evenNumberOddNumber();
    //switchCase();
    //doWhile();
    //loopBreak();
    //apr7exercise1();
    //functionbegining();
    //functionThreeNumberCompare();
    //functionExersice2();
    //checkThePrime();
    //scopeExersice();
    arrayExersice();
    
    return 0;
}

void useGlobal(void){
    printf("\nglobal x is %d on entering useGrobal\n", x);
    x *= 10;
    printf("global x is %d on entering useGrobal\n", x);
}
