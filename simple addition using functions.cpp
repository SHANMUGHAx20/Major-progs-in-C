/*2.
a. Develop a C program to add two numbers using call by reference
Example output:
Input first number: 21
Input second number:14
The sum is:35*/
#include<stdio.h>
int sum(int x,int y);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int ans;
	ans=sum(a,b);
	printf("the sum is %d",ans);
}
int sum(int x,int y)
{
	int total;
	total=x+y;
	return total;
}
