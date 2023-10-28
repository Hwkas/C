//
//  main.c
//  Finding no. in an Array
//
//  Created by Amaan Saifi on 08/08/19.
//  Copyright © 2019 Amaan Saifi. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int a[10];
    int rv,cn;
    printf("Enter the 10 to store in an array\n");
    for(cn=0;cn<10;cn++)
    {
        scanf("%d",&rv);
        a[cn] = rv;
        
    }
    scanf("%d",&cn);
    printf("%d",a[cn]);
    
    return 0;
}
