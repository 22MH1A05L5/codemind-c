#include<stdio.h>
int main()
{
    int n,l,r,rem=0;
    scanf("%d",&n);
    while(n--)
    {
        int c=0;
        scanf("%d%d",&l,&r);
        for(int j=l;j<=r;j++)
        {
            rem=j%10;
            if(rem==2||rem==3||rem==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}