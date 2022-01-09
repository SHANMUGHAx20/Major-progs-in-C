// command linee prompt 
#include<stdio.h>
int main(int argc,char *argv[])
{
	int data;
	int sum=0;
	for(int i=1;i<=argc;i++)
	{
		data=atoi(argv[i]);
		sum=sum+data;
		printf("the sum is = %d\n",sum);
	}
}
