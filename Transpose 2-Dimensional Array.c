#include<stdio.h>
void main()
{
 int a[2][2],b[2][2],i,j;
 printf("enter the 2x2 matrix.\n");
 for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
       {
         scanf("%d",&a[i][j]);
       }
   }
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
          b[i][j]=a[j][i];
        }
    }
  printf("transpose of the matrix is:\n");
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
          printf("%d",b[i][j]);
        }
      printf("\n");
    }
}
  
