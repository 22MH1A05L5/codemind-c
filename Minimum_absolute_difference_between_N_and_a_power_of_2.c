#include<stdio.h>
#include<math.h>
int main()
{
    int n,x=0,f,b,d1,d2;
    scanf("%d",&n);
    int i=1;
    while(x<=n)
    {
        x=pow(2,i);
        i++;
    }
    f=x;
    b=f/2;
    d1=f-n;
    d2=n-b;
    if(d1>=d2)
    {
        printf("%d",d2);
    }
    else if(d2>d1)
    {
        printf("%d",d1);
    }
}