#include<stdio.h>
#include<math.h>
int main()
{
  int n,r,rev=0;
  scanf("%d",&n);
  int sq=n*n;
  while(n>0)
  {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
  }
  int sq2=rev*rev;
  int rem,rv=0;
  while(sq2>0)
  {
      rem=sq2%10;
      rv=rv*10+rem;
      sq2=sq2/10;
  }
  if(sq==rv)
  {
   printf("True");   
  }
  else
  {
      printf("False");
  }
}