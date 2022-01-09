#include<stdio.h>
int main()
{
	int i,n,a;
	printf("enter number of array elements");
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("the sum is %d",sum);
		
}
