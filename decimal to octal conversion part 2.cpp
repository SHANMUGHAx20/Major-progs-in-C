/*2. Write a program in C to convert a decimal number into octal without using
an array.
Test Data :
Enter a number to convert : 79
Expected Output :
The Octal of 79 is 117*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
    printf("enter the number to be converted to octal \n");
    scanf("%d",&n);
    int rem;
    int oct=0,i=0;
    while(n!=0)
    {
    	rem=n%8;
    	oct=oct+rem*pow(10,i);
    	i=i+1;
    	n=n/8;
	}
	printf("the octal number is %d",oct);
}
