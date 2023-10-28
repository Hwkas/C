//
//  main.c
//  Age programm
//
//  Created by Amaan Saifi on 16/11/18.
//  Copyright © 2018 Amaan Saifi. All rights reserved.
//

#include <stdio.h>

void main()
{
    printf("Enter the age to know the Category\n");
    int a;
    scanf("%d",& a);
    if(a>=0&a<=5)
    {
        
     printf("You belong to child category");
    }
    else if(a>=6&a<=12)
    {
        printf("You are in Puberty");
    }
    else if(a>=12&a<=17)
    {
        printf("You are a teenager");
    }
    else if(a>=18&a<=50)
    {
        printf("You are adult");
    }
    else if(a>=51&a<=100)
    {
        printf("You are senior citizen");
    }
    else
    {
        printf("You are going to die\n");
    }
    
}
