#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k1=1,k2=0,a,b;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            a=pow(2,k1);
            printf("%d ",a);
            k1++;
        }
        else
        {
            if(i==2)
            {
                printf("0 ");
            }
            else
            {
                b=pow(3,k2);
                printf("%d ",b);
                k2++;
            }
        }
    }
}