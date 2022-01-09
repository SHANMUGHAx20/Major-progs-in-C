#include<stdio.h>
int sum(int);
int main()
{
	int n;
	scanf("%d",&n);
	int ans;
	ans=sum(n);
	printf("the sum of digits %d ",ans);
	
}
int sum( int x)
{
	if(x==0)
	return 0;
	else
	return x+sum(x-1);
	
}
//sum(5)=5+sum(4);   5 + 10 = 15
//sum(4)=4+sum(3);   4 + 6 = 10
//sum(3)=3+sum(2);   3 + 3 = 6
//sum(2)=2+sum(1);   2 + 1 = 3
//sum(1)=1+sum(0);   1 + 0 = 1





