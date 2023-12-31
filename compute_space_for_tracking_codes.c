//
//  main.c
//  compute space for tracking codes
//
//  Created by Amaan Saifi on 10/10/19.
//  Copyright © 2019 Amaan Saifi. All rights reserved.
/* A delivery company has hired you to manage their tracking services division. It is your job to store all of the currently used tracking codes in the company's database. These codes consist of either all integers, all decimal numbers, or all characters. The chief technology officer has warned you that the database is old and has limited space, so you want to determine how much memory the tracking codes will occupy before storing them. You decide to write a program to assist you in this process.

Your program should first read an integer number indicating how many tracking codes you plan on entering. Next, for each successive tracking code your program should read in the integer length of code followed by a space and then the type of code ('i' for integer, 'd' for decimal, or 'c' for character). Finally your program should print the total amount of space required to store all of the tracking codes (in bytes). If the user enters an incorrect type for any tracking number, the program should print 'Invalid tracking code type' and exit.*/
#include<stdio.h>
int main(void)
{
    int a = 0;
    int ntc = 0;//no. of tracking codes.
    int v = 0;// value of codes in nos.
    int ts = 0;//total size.
    char x;//for identifing the data type.
    scanf("%d",&ntc);
    for(a=0;a<ntc;a++)
    {
        scanf("%d %c",&v,&x);
        if(x=='i')
        {
            ts = ts+(v*4);
        }
        else if(x=='d')
        {
            ts = ts+(v*8);
        }
        else if(x=='c')
        {
            ts = ts+(v*1);
        }
        else
        {
            printf("Invalid tracking code type");
            return 0;
        }
    }
    
    printf("%d bytes",ts);
    
    
    return 0;
        
}
