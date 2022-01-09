/*2. Write a C program to print sum of odd numbers between 0 and
10(continue)*/
#include<stdio.h>
int main()
{
	int n;
	for(int i=1;i<=10;i++)
	{
		if(i%2==0)
		continue;
		n=n+i;
	}
	printf("%d",n);
}
