#include<stdio.h>
#include<string.h>
int main()
{
    int len=0,flag=1,i;
	char str[100];
	scanf("%s",str);
	for(i=0;str[i]!=NULL;i++)
	{
	    len++;
	}
for(i=0;i<len/2;i++)
{
    if(str[i]!=str[len-1-i])
    {
        flag=0;
        break;
    }
}
	 if(flag==1)
	 {
	 	printf("Palindrome");
	 }
	 else
	 {
	 	printf("Not Palindrome");
	 }
}