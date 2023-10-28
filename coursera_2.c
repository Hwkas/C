//
//  main.c
//  Coursera 2
//
//  Created by Amaan Saifi on 27/06/20.
//  Copyright © 2020 Amaan Saifi. All rights reserved.
/*      Algorithm
    Give input 'n'.
    call 'i' for 0 to 'n' (inclusive),i++.
    call 'j' for 0 to 'i' (exclusive),j++.
        o=2*'j';
    call 'j' for 'i' to '2*i' (exclusive),j++.
        o='j'.
 */

#include <stdio.h>

int main(void)
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++)//for counting input.
    {
        printf("%d ",i);
        for(j=0;j<i;j++)//for counting no. of outputs.
        {
            printf(" %d",(2*j));//output value.
        }
        for(j;j<2*i;j++)//for counting no. of outputs.
        {
            printf(" %d",j);//output value.
        }
        printf("\n");
    }
    return 0;
}
