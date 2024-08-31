#include<stdio.h>
void main()
{
  int sum=0,n;
  printf("enter the number ");
  scanf("%d",&n);
  while(n!=0)
   {
    sum=sum+(n%10);
    n=n/10;
   }  
  printf("the sum of  digits is %d",sum);
} 

