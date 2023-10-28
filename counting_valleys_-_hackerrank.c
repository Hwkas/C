#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,x=0;
    scanf("%d",&n);
    int b[n];
    char p[n];
    scanf("%s",p);
    printf("%s\n",p);
    for(i=0;i<n;i++)
    {
        if(p[i]=='D')
        {
            x--;
            b[i]=x;
        }
        else
        {
            x++;
            b[i]=x;
        }

    }
    x=0;
    for(i=0;i<n;i++)
    {
        if(b[i]<0 && b[i+1]==0) x++;
    }
    
    printf("%d\n",x);
    
}
