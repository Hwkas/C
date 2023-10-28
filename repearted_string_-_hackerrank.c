//
//  main.c
//  Repearted String - Hackerrank(not optimal approch)
//
//  Created by Amaan Saifi on 25/03/21.
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

char* readline();

// Complete the repeatedString function below

int main()
{
    char s[100];
    scanf("%s",s);
    long long int n=0;//beacuse n<=10^2.
    long int i=0,ac=0;//loop counter & a's counter.
    scanf("%lld",&n);
    while(i<n && n>0)/*here 'i' is counting the string. here <= because i also counter the null.*/
    {
        if(s[i]!='\0')
        {
            
            if(s[i]=='a')
            {
               ac++;
               i++;
            }
            else i++;
            
  
        }
        else
        {
            n=n-i;
            i=0;
        
         }
    }
    printf("%ld",ac);
    
    return 0;
}

