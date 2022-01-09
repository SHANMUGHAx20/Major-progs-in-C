/*3. Ask the students to find the sum of the series [1-x^2/2! +x^4/4!-
........].*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter the number till where you want to execute the problem\n");
	scanf("%d",&n);
	float x;
	printf("enter the value of x\n");
	scanf("%f",&x);
	float a;
    	
	for(int i=2;i<n;i=i+2)
	{
		   int  mul=1;
			for(int j=i;j>0;j--)
	{
	        	mul=mul*j;
	}
	      a=a+pow(x,i)/mul*1.0;	
	}
	printf("the sum is %f",a);
}
