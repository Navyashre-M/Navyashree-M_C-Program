#include<stdio.h>
int main()
{
  int a[5][5],b[5][5],c[5][5],i,j,k,m,n,p,q;
  printf("Enter the order of matrix A:");
  scanf("%d%d",&m,&n);
  printf("Enter the order of matrix B:");
  scanf("%d%d",&p,&q);
  if(n!=p)
  {
    printf("Matrix multiplication is not possible\n");
    return 0;
  }
  printf("Enter elements of matrix A\n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
  printf("Enter elements of matrix B\n");
  for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)

        scanf("%d",&b[i][j]);
    }
  for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
        {
          c[i][j]=0;
          for(k=0;k<n;k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    
    }
  printf("The product matrix is:\n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
        printf("%d\t",c[i][j]);
      printf("\n");
    }
  
}    

