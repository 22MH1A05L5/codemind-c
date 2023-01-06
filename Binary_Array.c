#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0||a[i]==1)
        {
            s++;
        }
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}