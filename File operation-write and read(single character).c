#include<stdio.h>
int main()
{
  FILE *fp;
  char c[100];
  fp=fopen("file.txt.txt","w+");
  fputc('t',fp);
  fputs("hello",fp);
  return 0;
}

