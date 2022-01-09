/* Write a program in C to convert a decimal number into binary without using
an array.
Test Data :
Enter a number to convert : 79
Expected Output : 1001111
The Octal of 79 is */
#include<stdio.h>
int main()
{
	int n;
    printf("enter the number to be converted to octal \n");
    scanf("%d",&n);
    long int rem,r;
    long int oct=0,p=0;
    while(n!=0)
    {
    	rem=n%2;
    	oct=oct*10+rem;
    	n=n/2;
	}
	while(oct!=0)
	{
		r=oct%10;
		p=p*10+r;
		oct=oct/10;
	}
	printf("the binary number is %d",p);
}
