#include<stdio.h>
void main()
{
  int n,i;
  char str[50];
  printf("enter n: ");
  scanf("%d",&n);
  printf("enter string: ");
  scanf("%s",str);
  printf("%s\n",str);
  for(i=0;i<=n;i++)
    {
      printf("%c\n",str[i]);
    }
}
