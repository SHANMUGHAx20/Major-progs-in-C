#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	int r=0;
	int temp=n;
	while(n!=0)
	{
		r=n%10;
		a=a+(r*r*r);
		n=n/10;
	}
	if(temp==a)
	printf("the amstrong number is %d",a);
    else
     printf("its not a amstong number");
}
