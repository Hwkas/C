//
//  main.c
//  Socks Merchant-HackerRank
//
//  Created by Amaan Saifi on 21/10/19.
//  Copyright © 2019 Amaan Saifi. All rights reserved.
/*John works at a clothing store. He has a large pile of socks that he must pair by color for sale. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.
For example, there are  socks with colors . There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .
 
 */

#include <stdio.h>

int main(void)
{
    //! showMemory(start=65520)
    int i = 0;
    int j = 0;
    int swap = 0;
    int n = 0;//no. of socks.
    int ar[101];
    int p = 0;//no.of pairs of socks.
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(ar[j]<ar[i])
           {
            swap = ar[i];
            ar[i] = ar[j];
            ar[j] = swap;
            }
        }
        
    }
    for(i=0;i<n-1;i++)
    {
        if(ar[i]==ar[i+1])
        {
            p++;
            i++;
        }
    }
    printf("%d",p);
    return 0;

}
