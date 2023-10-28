//
//  main.c
//  Coursera Test 3
//
//  Created by Amaan Saifi on 28/06/20.
//  Copyright © 2020 Amaan Saifi. All rights reserved.
/*      Algorithm
    Give input 'n'.
    Call 'i' for 0 to 'n' (inclusive).
    call 'j' for 0 to 'i' (exclusive).
        o = -(i*i)+(j*j).
 */

#include <stdio.h>

int main(void)
{
    int n,i,j,o;//variables
    scanf("%d",&n);
    for(i=0;i<=n;i++)//for countings 'n' input value.
    {
        printf("\n%d  ",i);
        for(j=0;j<(3*i);j++)//for counting 'i' no. of outputs.
        {
            o = -(i*i)+(j*j);//calculating output value.
            printf("%d ",o);
        }
    }
    return 0;
}
