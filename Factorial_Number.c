#include<stdio.h>
void main()
{
  int i=1,n,fact=1,res;
  printf("enter the number");
  scanf("%d",&n);
  while(i<=n)
    {
      fact=fact*i;
      i++;
    }
  printf("The factorial is %d\n",fact);
  res=fact%10;
  printf("the remainder is %d",res);
}

