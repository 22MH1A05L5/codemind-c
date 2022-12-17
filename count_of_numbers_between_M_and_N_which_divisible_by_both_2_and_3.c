#include<stdio.h>
int main()
{
    int m,n,c=0;
    scanf("%d%d",&m,&n);
    int i;
    for(i=m;i<=n;i++)
    {
        if(i%2==0&&i%3==0)
        c++;
        
    }
    printf("%d",c);
}