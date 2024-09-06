#include <stdio.h>
struct student
{
int n;
};
void printdetail(struct student *s)
{
  printf("%d",s->n*s->n);
}
int main()
{
  struct student s;
  scanf("%d",&s.n);
  printdetail(&s);
}
