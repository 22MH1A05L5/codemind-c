#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
            {
                printf(" ");
            }
            for(int j=i-1;j>=1;j--)
            {
                printf("%d",j);
            }
            for(int t=0;t<=i-1;t++)
            {
                printf("%d",t);
            }
        printf("
");
    }
}