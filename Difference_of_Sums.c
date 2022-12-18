#include<stdio.h>
int main()
{
    int n,sum=0,sum2=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum2=sum2+i;
        sum=sum+i*i;
    }
    int sq=sum2*sum2;
    printf("%d",sq-sum);
}