#include<stdio.h>
int main()
{
    int n,count=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]%2!=0)
            {
                c++;
            }
        }
        else if(i%2!=0)
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