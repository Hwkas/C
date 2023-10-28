//
//  main.c
//  Coursera Test 4
//
//  Created by Amaan Saifi on 05/07/20.
//  Copyright © 2020 Amaan Saifi. All rights reserved.
/*          Algorithm
    Give input 'N'.
    Call 'i' for 0 to 'N'(inclusive).
    Call 'j' for 0 to 'i'(inclusive).
    Co-ordinates for Red Boxes [(i-j),(j)].
    if((i+1-2*j)>=0) Co-ordiantes of Green Boxes [(i+1-2*j),(2*j)].
    if((i-2*j)>=0) Co-ordinates of Blue Boxes [(i-2*j),(2*j+1)].
 
 */

#include <stdio.h>

int main(void)
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++)//for counting 'n'.
    {
        printf("\n\nFor N = %d",i);//for counting no. of outputs of 'n'.
        for(j=0;j<=i;j++)
        {
            printf("\nCo-ordinates of Red Boxes (%d,%d)",i-j,j);//
            
            if((i+1-2*j)>=0)//only print +ve co-ordiantes.
            {
                printf("\nCo-ordiantes of Green Boxes (%d,%d)",i+1-2*j,2*j);
            }
            if((i-2*j)>=0)//only print +ve co-ordiantes.
            {
                printf("\nCo-ordinates of Blue Boxes (%d,%d)",i-2*j,2*j+1);
            }
            
        }
    }
    return 0;
}
