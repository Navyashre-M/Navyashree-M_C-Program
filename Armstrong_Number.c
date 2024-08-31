#include <stdio.h>
#include <math.h>
void main()
{
  int n,originalNum,remainder,results=0,digits=0;
  printf("Enter the number:");
  scanf("%d",&n);
  originalNum=n;
  while(originalNum!=0)
    {
     originalNum/=10;
     digits++;
     printf("Iteration:%d,Digits counted so far:%d\n",digits,digits);

    }
  originalNum=n;
  while(originalNum!=0)
    {
      remainder=originalNum%10;
      results=pow(remainder,digits);
      originalNum/=10;

    }
  if(results==n)
    printf("%d is an Armstrong number\n",n);
  else
    printf("%d is not an Armstrong number\n",n);
}



