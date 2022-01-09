#include<stdio.h>
int main()
{
	int n;
	printf("enter number of the array elements\n");
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int key;
	printf("enter the search elements\n");
	scanf("%d",&key);
	int low=0,high=n-1,mid,flag=0,count=0;
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
			count =count+1;
			break;
		}
	}
	printf("%d",count);
	if(flag==0)
	printf("search element not found");
}
