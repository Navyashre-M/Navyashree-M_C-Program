#include<stdio.h>
struct student
{
 char name[30];
int rollno;
int grade;
};
int main()
{
  struct student s[30];
  int i,n;
  printf("Enter the number of student\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      printf("Enter the name of %d student\n",i+1);
      scanf("%s",s[i].name);
      printf("Enter the rollno of %d student\n",i+1);
      scanf("%d",&s[i].rollno);     
      printf("Enter the grade of %d student\n",i+1);
      scanf("%d",&s[i].grade);
    }
  for(i=0;i<n;i++)
{
      printf("%d student details is\n",i+1);
      printf("Name:%s\n",s[i].name);
      printf("Roll no:%d\n",s[i].rollno);
      printf("Grade:%d\n",s[i].grade);
    }
  
  return 0;
}
