//
//  main.c
//  Arrays: Left Rotation-Hackerrank
//
//  Created by Amaan Saifi on 31/03/21.
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
void rotation(int *ar,long e,long l)//ar- array ,e-no. of elements & l-left rotation no.
{
    int i,j;//loop counter.
    int swap=0;
    for(i=0;i<l;i++)
    {
        for(j=0;j<e-1;j++)
        {
            if(j==0) swap= ar[j];//we need to swap only once to preserve the first value.
            ar[j]=ar[j+1];
        }
        ar[e-1]=swap;
    }
    for(i=0;i<e;i++) printf("%d ",ar[i]);
    
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


