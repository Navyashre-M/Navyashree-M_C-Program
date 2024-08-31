 #include<stdio.h>
#include<string.h>
void main()
{
  int arr[2][2],b[2][2],c[2][2],i,j;
  printf("enter the matrix a: ");
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
          scanf("%d",&arr[i][j]);
        }
    }
  printf("enter the matrix b: ");
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
          scanf("%d",&b[i][j]);
        }
    }
  printf("the sum of matrix is\n");
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
          printf("%d\t",c[i][j]);
        }
      printf("\n");
    }
}
