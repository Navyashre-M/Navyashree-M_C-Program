#include<stdio.h>
void main()
{
  FILE *fp;
  char c[100];
  fp=fopen("Raj.txt","r");
  fgets(c,5,fp);
  printf("character is %s\n",c);
  fclose(fp);
}
