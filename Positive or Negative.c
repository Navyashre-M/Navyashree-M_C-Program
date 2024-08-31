#include<stdio.h>
void main()
{
  int num;
  printf("enter the value of n");
  scanf("%d",&num);
  if(num<0){
    printf("the number is negative");
  }
  else if(num>0){
    printf("the number is positive");
  }
  else{
     printf("the number is zero");
}
}