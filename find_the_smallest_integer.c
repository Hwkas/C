//
//  main.c
//  find the smallest integer
//
//  Created by Amaan Saifi on 17/09/19.
//  Copyright © 2019 Amaan Saifi. All rights reserved.
/*The goal of this problem is to find the smallest integer in a list of numbers.
 
 To help you with this task, please write a function called min() that finds and returns the smallest amongst two integers (be sure to also write a prototype for this function). The function thus takes two integers as input and returns the smallest of the two. This function will use an if statement with a condition that contains either "less than" or "greater than".
 
 Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum. The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.*/

#include <stdio.h>

int min(int, int);

int main(void) {
    int i;
    int minimum;
    int num;
    int a;
    
    scanf("%d", &num);
    scanf("%d", &minimum);
    
    for (i = 1; i < num; i++) {
        scanf("%d", &a);
        minimum = min(minimum, a);
    }
    printf("\n%d\n", minimum);
    
    return 0;
}

int min(int a, int b) {
    if (a < b){
        return a;
    }else{
        return b;
    }
}
/* In this programm
 first we have assigned a value to the varible 'num'.
 then  we have assigned a value to the variable 'minimum'.
 a for loop is used , the for loop is started from i=1 becuase we have already taken a interger in varible
 'minimum'.
 the a value is assigned to variable 'a'
 after that the two variable are compared in the function 'min' & the smallest no. is returned to minimum & a new value of 'a' is compared to the 'minimum'
 after the loop ends the minimum value is printed.*/
