//
//  main.c
//  Repeated String - Hackerrank (Optimal Approch)
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
    char s[100];
    scanf("%s",s);
    long int n=0;//beacuse n<=10^2.
    long int i=0,ac=0;//loop counter & a's counter.
    scanf("%ld",&n);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a') ac++;
    }
    
    ac= ac*(n/(strlen(s)));//dividing & the result will be a whole no.

    for(i=0;i<n%strlen(s);i++)//finding remainder.
    {
        if(s[i]=='a') ac++;
    }
    
    printf("%ld",ac);
    
    return 0;
}

