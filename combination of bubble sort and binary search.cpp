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
     	int key;
	printf("enter the search elements\n");
	scanf("%d",&key);
	int low=0,high=n-1,mid,flag=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key > a[mid])
		{
			low=mid+1;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else if(key==a[mid])
		{
			flag=1;
			printf("search element found");
			break;
		}
	}
	if(flag==0)
	printf("search element not found");
}
