//
//  functionThreeNumberCompare.c
//  ITD_CProject
//
//  Created by Norio Egi on 4/7/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "functionThreeNumberCompare.h"

void functionThreeNumberCompare(void){
    int int1;
    int int2;
    int int3;
    
    printf("Enter the three number which is not same value.\n");
    printf("Enter the number for int1\n");
    scanf("%d", &int1);
    printf("Enter the number for int2\n");
    scanf("%d", &int2);
    printf("Enter the number for int3\n");
    scanf("%d", &int3);
    
    int result = maximum(int1, int2, int3);
    
    if (result != 0) {
        printf("%d is the greatest Number of them!\n", result);
    }else{
        printf("Something is wrong!!");
    }
    
 

}

int maximum(int x, int y, int z){
    
    if (x == y || y == z || x == z) {
        if (x==y) {
            if (x > z) {
                return x;
            }else{
                return z;
            }
        }else if (y ==z){
            if (y > x) {
                return y;
            }else{
                return x;
            }
        
        }else if (x == z){
            if (x > y) {
                return x;
            }else{
                return y;
            }
        }
    }else{
        if (x > y && x > z) {
            return x;
        }else if(y > x && y > z){
            return y;
        }else if(z > x && z > y){
            return z;
        }

    }
        return 0;
}

