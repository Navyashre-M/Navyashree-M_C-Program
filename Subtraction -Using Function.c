#include <stdio.h>
int subtract(int a, int b){
  return a-b;
}
int main()
{
  int num1,num2,result;
  printf("enter the 1 number");
  scanf("%d",&num1);
  printf("enter the 2 number");
  scanf("%d",&num2);
  result=subtract(num1,num2);
  printf("the difference between %d and %d is %d",num1,num2,result);
  
}
