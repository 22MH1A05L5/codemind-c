#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x=a[0],c=0,max=0;
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("0");
    }
    else{
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    cnt++;
                }
            }
            if(cnt>max)
            {
                max=cnt;
            }
        }
        printf("%d",max);
    }
}