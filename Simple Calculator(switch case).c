#include<stdio.h>
void main()
{
  int a,b;
  char oper;
  printf("Enter the value of a\n");
  scanf("%d",&a);
  printf("enter the value of b\n");
  scanf("%d",&b);
  printf("enter the operator( +,-,*,/,):");
  scanf(" %c",&oper);
  switch(oper){
    case '+':
      printf("sum is %d\n",a+b);
       break;
    case '-':
      printf("sub is %d\n",a-b);
       break;
    case'*':
      printf("mul is %d\n",a*b);
      break;
    case '/':
      if(b!=0){
        printf("the division is %d\n",a/b);
     }else{
        printf("division by zero is not allowed.\n");  
     }
      break;
    default:
     printf("invalid operator.\n");
  }
  }

