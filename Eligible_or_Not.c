#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(z<y&&z>=x)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}