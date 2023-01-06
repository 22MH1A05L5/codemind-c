#include<stdio.h>
int main()
{
    int n,p=1,s=0,r;
    scanf("%d",&n);
    int t=n*n;
    while(t>0)
    {
        r=t%10;
        p=p*r;
        s=s+r;
        t=t/10;
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