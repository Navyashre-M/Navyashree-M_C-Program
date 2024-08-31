#include<stdio.h>
void main()
{
  int a[10],n,i,max,min;
  printf("Enter size of array\n");
  scanf("%d",&n);
  printf("Enter elements of array\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  max=a[0];
  min=a[0];
  for(i=0;i<n;i++)
    {
      if(a[i]>max)
        max=a[i];
      else if(a[i]<min)
       min=a[i];
    }
  printf("Maximum value=%d\n",max);
  printf("Minimum value=%d\n",min);    
}
