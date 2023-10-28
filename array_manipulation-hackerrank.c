//
//  main.c
//  Array Manipulation-Hackerrank
//
//  Created by Amaan Saifi on 13/04/21.
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
    long long n=0,i=0,m=0,j=0;/* size of array , its loop counter & no. of operations , its loop counter.*/
    scanf("%lld %lld",&n,&m);
    long long iar=0,far=0;//initial array point & final array piont.
    long long carv=0,harv=0,mv=0;/*current value of array , highest value in the array & value of m.*/
    long long ar[n];
    for(i=1;i<=n;i++) ar[i]=0;
    for(j=0;j<m;j++)
    {
        scanf("%lld %lld %lld",&iar,&far,&mv);
        for(i=iar;i<=far;i++)
        {
            ar[i]+=mv;
            carv=ar[i];
            if(carv>harv) harv=carv;
        }
    }
    printf("%lld\n",harv);
}
