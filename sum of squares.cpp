#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n;i++)
	{
	    sum=pow(i,2)+sum;
	}
	printf("the sum is %d",sum);
}
