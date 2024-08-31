#include<stdio.h>
int fibonacci(int n);
void main()
{
  int n,result;
  printf("Enter n value\n");
  scanf("%d",&n);
  result=fibonacci(n);
  printf("Fibonacci of the %d is %d\n",n,result);
}
int fibonacci(int n)
{
  if(n==0)
    return 0;
  else if(n==1)
    return 1;
  else
    return fibonacci(n-1)+fibonacci(n-2);
}
