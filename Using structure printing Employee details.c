#include<stdio.h>
struct employee
{
int id,highestsalary=0;
char name[50];
int salary;
char departement[30];
};
void main()
{
  struct employee e[3];
  int i;
  for(i=0;i<3;i++)
    {
      printf("Enter the id of employee %d\n",i+1);
      scanf("%d",&e[i].id);
      printf("Enter the name of employee %d\n",i+1);
      scanf("%s",e[i].name);
      printf("Enter the salary of employee %d\n",i+1);
      scanf("%d",&e[i].salary);
      printf("Enter the departement of employee %d\n",i+1);
      scanf("%s",e[i].departement);

    }
printf("Employee with Highest salary:\n);
  for(i=0;i<3;i++)
    {
      if(e[i].salary>e[highestsalary].salary)
        {
          highestsalary=i;
        } 
    }
printf("Name=%s\n",e[highestsalary].name);
printf("Salary=%d\n",e[highestsalary].salary);
  printf("ID=%d\n",e[highestsalary].id);
printf("Departement=%s\n",e[highestsalary].departement);  
}
