#include <stdio.h>

int main()
{
  int a[100],n,swap;
  printf("Enter number of elements\n");
  scanf("%d",&n);
  printf("Enter %d integers\n", n);
  for (int i=0;i<n;i++)
  {
    scanf("%d", &a[i]);
  }
  for (int i=0;i<n-1;i++)
  {
    for (int j=0;j<n-i-1;j++)
    {
      if (a[j]>a[j+1]) 
      {
        swap=a[j];
        a[j]=a[j+1];
        a[j+1]=swap;
      }
    }
  }
  printf("Sorted list in ascending order:\n");
  for (int i=0;i<n;i++)
     printf("%d\n",a[i]);
}
