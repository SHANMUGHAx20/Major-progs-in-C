#include<stdio.h>
int main()
{
	char str[100];
	char ch;
	int count;
	int i;
	printf("enter a string for inputn\n");
	scanf(" %[^\n]s",&str);
	for(ch='a';ch<='z';ch++)
	{
	count=0;
	 for(i=0;str[i]!=0;i++)
    	{ 
	     if(str[i]==ch)
	     count++;
	    }
	    printf("the number of %s's in the string is %d",ch,count);
    }
    if(str[i]=!0)
	 	printf("not a paragram");
	 	else 
        printf("the given string is a panagram ");
}
