//
//  main.c
//  Nested if ,for - Finding Big city
//
//  Created by Amaan Saifi on 14/08/19.
//  Copyright © 2019 Amaan Saifi. All rights reserved.
//To find the no. of cities having population more than 10,000.

#include <stdio.h>
int main(void)
{
    int nc;
    scanf("%d",&nc);
    int i =0;
    int bc = 0;
    int a[i];
    for(i=0;i<nc;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>10000)
        {
            bc = bc+1;
        }
        
    }
    printf("%d\n",bc);
    return 0;
}
