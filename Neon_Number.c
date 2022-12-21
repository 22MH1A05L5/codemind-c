#include<stdio.h>
int main()
{
    int n,s=0,r,p;
    scanf("%d",&n);
    p=n*n;
    while(p>0)
    {
        r=p%10;
        s=s+r;
        p=p/10;
    }
    if(n==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}