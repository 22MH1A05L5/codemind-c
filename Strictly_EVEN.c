#include<stdio.h>
int main()
{
    int n,i,c=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]%2!=0)
            {
                c++;
            }
        }
        else
        {
            if(a[i]%2==0)
            {
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}