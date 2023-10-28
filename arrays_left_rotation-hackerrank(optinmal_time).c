//
//  main.c
//  Arrays: Left Rotation-Hackerrank(Optinmal Time)
//
//  Created by Amaan Saifi on 31/03/21.
//Note - The counting for left rotation starts form 0.

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void rotation(int *ar,long e,long l)//ar- array ,e-no. of elements & l-left rotation no.
{
    int i=0,j;//loop counter.
    for(j=0;j<e;j++)
    {
        if(l<e)
        {
        printf("%d ",ar[l]);
        l++;
        }
        else//for left over elements
        {
        printf("%d ",ar[i]);
        i++;
        }
    }
}

int main()
{
    long n=0,d=0;//n-no. of elements in the array & d-no. of left rotations.
    int i=0;//loop counter.
    scanf("%ld %ld",&n,&d);
    int a[n];// a- array of size 'n'.
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    rotation(a,n,d);
    return 0;
}
