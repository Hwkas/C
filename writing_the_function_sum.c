//
//  main.c
//  Writing the function sum
//
//  Created by Amaan Saifi on 11/09/19.
//  Copyright © 2019 Amaan Saifi. All rights reserved.
//Writing the function sum for the addtition of two numbers.

#include <stdio.h>
int sum(int x,int y)
{
int compute;
compute = x+y;
return compute;
}

int main(void)
{
    printf("enter two numbers for addition");
    int a = 0;
    int b = 0;
    int result = 0;
    scanf("%d %d",&a,&b);
    result = sum(a, b);
    printf("%d",result);
    return 0;
}
