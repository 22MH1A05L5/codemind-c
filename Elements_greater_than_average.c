#include<stdio.h>
int main()
{
    int n,s=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    int avg=s/n;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=avg)
        {
            c++;
        }
    }
    printf("%d",c);
}