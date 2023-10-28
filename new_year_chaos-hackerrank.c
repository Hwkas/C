//
//  main.c
//  New Year Chaos-Hackerrank
//
//  Created by Amaan Saifi on 02/04/21.
//

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t=0,i;//no. of test cases & loop counter.
    long n=0,j;//no. of people or say no. of elements in the array & loop counter.
    int b=0;//bribe counter.
    long k;//loop counter for bribe.
    int s;//swap function.
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        int ar[n];
        for(j=1;j<=n;j++) scanf("%d",&ar[j]);//no. of people can't be zero.
        for(k=n;k>=1;k--)
        {
            if(ar[k]!=k)
            {
                if(ar[k-1]==k)
                {
                    b++;
                    s = ar[k];
                    ar[k] = ar[k-1];
                    ar[k-1] = s;
                }
                else if(ar[k-2]==k)
                {
                    b+=2;
                    s = ar[k-2];
                    ar[k-2] = ar[k-1];//first swap.
                    ar[k-1] = s;
                    
                    s = ar[k];
                    ar[k] = ar[k-1];//second swap.
                    ar[k-1] = s;
                }
                else
                {
                    printf("Too chaotic\n");
                    break;
                }
            }
            else if(k==1)printf("%d\n",b);
        }
        b=0;
    }
    
    return 0;
}
