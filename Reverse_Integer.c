#include<stdio.h>
int main()
{
    long int a,r=0,num;
    scanf("%ld",&num);
    a=num;
    if(num<0)
    {
        num=-1*num;
    }
    while(num>0)
    {
        r=r*10+num%10;
        num=num/10;
    }
    if(a>0)
    {
        printf("%ld",r);
    }
    if(a<0)
    {
        printf("%ld",(-1*r));
    }
    return 0;
}