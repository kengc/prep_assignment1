//
//  main.c
//  Assignment1
//
//  Created by Kevin Cleathero on 2017-02-23.
//  Copyright © 2017 Kevin Cleathero. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    
    for (int i = 1; i <= 100; i++)
    {
        
        if((i % 3 == 0) && (i % 5 == 0)){
            printf("FizzBuzz: %d\n", i);
        } else if(i % 3 == 0){ //multiples of 3
            printf("Fizz: %d\n", i);
        } else if (i % 5 == 0) { //multiples of 5
            printf("Buzz: %d\n", i);
        } else {
            printf(" %d\n", i);
        }
    }
    
    return 0;
}
