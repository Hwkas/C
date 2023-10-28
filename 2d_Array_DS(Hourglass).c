//
//  main.c
//  2D Array - DS(Hourglass)
//
//  Created by Amaan Saifi on 26/03/21.
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
    int arr[6][6];
    int l=0,w=0;//l- length loop & w-width loop.
    int sum=0,swap=0,f=0;//f-for first sum only
    for(l=0;l<6;l++)
    {
        for(w=0;w<6;w++) scanf("%d",&arr[l][w]);
    }
    
    for(l=0;l<4;l++)
    {
        for(w=0;w<4;w++)
        {
            sum = arr[l][w]+arr[l][w+1]+arr[l][w+2]+arr[l+1][w+1]+arr[l+2][w]+arr[l+2][w+1]+arr[l+2][w+2];
            if(f==0)
            {
                swap = sum;
                f++;
            }
            else if(sum>swap) swap = sum;
        }
        
    }
    
    printf("%d",swap);
    
}
