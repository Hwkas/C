//
//  main.c
//  Jumping on the Clouds - Hackerrank
//
//  Created by Amaan Saifi on 24/03/21.
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
   int i=0,n=0,j=0;//loop counter & no. of clouds.
   scanf("%d",&n);
   int c[n];
   for(i=0;i<n;i++) scanf("%d",&c[i]);
   i=0;
   for(i=1;i<n;i++)//because first value is always zero.
   {
       if(c[i]==0)
       {
           j++;
           if(c[i+1]==0) i++;
       }
       else
       {
           while(c[i]==1)//if multiple 1 occur simultaneously.
           {
               i++;
           }
           j++;
       }
   }
   
   printf("%d",j);
    
}
