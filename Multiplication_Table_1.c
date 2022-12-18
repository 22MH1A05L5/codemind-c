#include<stdio.h>
int main()
{
    int a,b=12;
    scanf("%d",&a);
    for(int i=1;i<=b;i++)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
}