//
//  main.c
//  Converting Strings to ints - Coursera
//
//  Created by Amaan Saifi on 28/03/21.
//

#include <stdio.h>
#include <string.h>
void convert(char c[])
{
    int num=0;
    int n = strlen(c);
   
    for (int i = 0; i < n; i++)
     
           // Subtract 48 from the current digit
           num = num * 10 + (c[i] - 48);
     
       // Print the answer
       printf("%d\n", num);
    
}

int main()
{
    char s[] = "1234" ;

    convert(s);
    
    return 0;
}
