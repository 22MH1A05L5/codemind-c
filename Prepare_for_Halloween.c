#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x*2>y*5)
        {
            printf("Chocolate
");
        }
        else if(x*2==y*5)
        {
            printf("Either
");
        }
        else if(x*2<y*5)
        {
            printf("Candy
");
        }
    }
}