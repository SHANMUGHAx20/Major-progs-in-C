/*4. Write a C function which display the value of n is 1 when m is larger than 0
0 when  m is 0 and -1 when m is less than 0.*/
#include<stdio.h>
int mn(int x);
int main()
{
	int n;
	printf("enter any number\n");
	scanf("%d",&n);
	int total;
	total=mn(n);
	if(mn(n)==0)
	printf("the  value of n  is %d",total);
	if(mn(n)==1)
	printf("the value of n is 53");
}
int mn(int x)
{
	if(x>0)
	{
		return 1;
	}
	else if(x<0)
	{
		return -1;
	}
	else 
	{
		return 0;
	}
}
