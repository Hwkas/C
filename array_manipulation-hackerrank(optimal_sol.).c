//
//  main.c
//  Array Manipulation-Hackerrank(Optimal sol.)
//
//  Created by Amaan Saifi on 21/04/21.
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
    long long n,i=0,m,j=0,cv=0,hv=0;/*n- no. of integers in the array , its loop counter , m- no. of operations , its loop counter , current value & highest value.*/
    scanf("%lld %lld",&n,&m);
    int *ar=(int*)malloc(sizeof(int)*n+1);
    for(i=1;i<=n;i++) ar[i]=0;
    for(j=0;j<m;j++)
    {
        long long a,b,k;
        scanf("%lld %lld %lld",&a,&b,&k);
        ar[a]+=k;
        if(b+1<=n) ar[b+1]+= -k;
    }
    for(i=1;i<=n;i++)
    {
        cv+=ar[i];
        if(cv>hv) hv=cv;
    }
    printf("%lld",hv);
}
