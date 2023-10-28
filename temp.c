//
//  main.c
//  temp
//
//  Created by Amaan Saifi on 27/08/21.
//

#include <stdio.h>
int main()
{
/*int n,x=0,y;
printf("enter an integer");
scanf("%d",&n);
while(n!=0)
{
    y=n%10;
    x=x+y;
    n=n/10;
}
printf("ans =%d",x);*/
    
    /*if ('A'<'a') printf("swayam");
    else printf("c p");*/
    /*int i=0,j=1;
    printf("\n %d",i++&&++j);
    printf("\n %d %d\n",i,j);*/

/*int N, sum=0;
scanf("%d", &N);

    N=N/2;
    int i=0;
    for(i=1;i<=N;i++)
    {
      sum = sum+i*2;
    }
    printf("Sum = %d", sum);*/

int base, exponent;
long int result=0;
scanf("%d", &base); //The base value is taken from test case
scanf("%d", &exponent);  //The exponent value is taken from test case
    int i=1;
        if((base>0) && (exponent=0)) result = base*exponent+1;
        else if ( exponent>0)
        {
          while(i<exponent)
          {
              result = base*base;
              i++;
          }
            
        }
    printf("The result is : %ld\n", result);
    

    return 0;
}
