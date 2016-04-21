//
//  recursion.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/21/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "recursion.h"

const int MAX_RECRUSION = 80;


void sscanfExer(){
    
    char s[] = "31298 87.375";
    int x;
    double y;
    
    sscanf(s, "%d%lf",  &x, &y);
    printf("%s\n%s%6d\n%s%8.3f\n",
           "The values stored in character array s are:", "integer", x, "double",y);
}

void sprintfExer(){

    char s[MAX_RECRUSION];
    int x;
    double y;
    
    puts("Enter an integer and a double:");
    scanf("%d, %lf", &x, &y);
    
    sprintf(s, "integer:%6d\ndouble:%8.2f",x, y);
    
    printf("%s\n%s\n","The formatted output stored in arrays is:",s);

}


void getCharFunction(){
    
    char c;
    char sentence[MAX_RECRUSION];
    int i = 0;

    
    puts("Enter a line of text:");
    
    while (i < MAX_RECRUSION-1 && (c = getchar()) != '\n' ) {
        sentence[i++] = c;
    }
    
    sentence[i] = '\0';
    
    puts("\nThe line entered was:");
    puts(sentence);

}


void reverse(const char * const sPtr){
    
    if (*sPtr == '\0') {
        return;
    }else{
        reverse(&*(sPtr+1));
        putchar(*sPtr);
       
    }
    
}


void recursion(){
    
    char sentence[MAX_RECRUSION];
    puts("Enter a line of text");
    
    fgets(sentence, MAX_RECRUSION, stdin);
    
    puts("\nThe line printed backword is :");
    reverse(sentence);
     puts("\n");
    
    

}
