#include<stdio.h>
#include<string.h>
void main()
{
  char str1[10],str2[20];
  
  scanf("%s",str1);
  scanf("%s",str2);
  strcmp(str1,str2);
  printf("the string is ",strcmp);
  int result = strcmp(str1,str2);
  if(result==0)
  {
    printf("the strings are equal\n");
  }
  else if(result<0)
  {
    printf("%s comes before %s lexicographically\n",str1,str2);
  }
  else
  {
    printf("%s comes after %s lexicographically\n",str1,str2);
  }
