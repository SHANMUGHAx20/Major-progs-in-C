#include<stdio.h>
#include<math.h>
int sum();
int main()
{
sum();
}
int sum()
{
		int n;
	scanf("%d",&n);
	int sum=0;
	int r=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("the sum is %d",sum);
}
