#include<stdio.h>
int sum(int);
int main()
{
	int n,s;
	printf("enter the number\n");
	scanf("%d",&n);
	s=sum(n);
	printf("the sum is %d ",s);
}
int sum(int n)
{
	if(n==0)
	return 0;
	else 
	return n%10+sum(n/10);
}

