//
//  main.c
//  Minimum Swaps 2-Hacker(Optimal time)
//
//  Created by Amaan Saifi on 10/04/21.
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
    long n=0,i=0;//no. of elements in the array & loop counter.
    scanf("%ld",&n);
    int ar[n];//array with 'n' no. of elements.
    int s=0,sc=0;//swap & swap counter.
    long j,k;//loop counters.
    for(i=1;i<=n;i++) scanf("%d",&ar[i]);
    for(j=1;j<n;j++)
    {
        if(j!=ar[j])
        {
            k=j;
            while(j!=ar[k]) k++;//finding the place of value of j in array.
            s = ar[j];//swaping.
            ar[j] = ar[k];
            ar[k] = s;
            sc++;//swap counter.
        }
    }
    printf("%d\n",sc);
    return 0;
    
}
