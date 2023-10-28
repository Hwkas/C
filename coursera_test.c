//
//  main.c
//  Coursera Test
//
//  Created by Amaan Saifi on 27/06/20.
//  Copyright © 2020 Amaan Saifi. All rights reserved.
/*                  Algorithm
    Give input 'n'.
    call 'i' for 0 to 'n' (inclusive), i++.
    call 'j' for 0 to ('i'+1)*2 (exclusive), j++.
    'o' = 3*N+2*i.
*/

#include <stdio.h>

int main(void)
{
    int n,o,i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++)//for counting 0 to n, no. of inputs.
    {
        printf("\n%d  ",i);
        
        for(j=0;j<(i+1)*2;j++)//for counting no. of outputs for a give no.
        {
            o = (3*i+2*j);//for the value for each no.
            printf("%d ",o);
        }
    }
    return 0;
}
