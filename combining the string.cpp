/*2. Students are asked to Implement a C program
to find add a string to the end of another string
without using library function strcat()
shanmugha
sathvik*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[100];
	int len1,len2;
	scanf(" %[^\n]s" ,&str1);//shanmugha
	scanf(" %[^\n]s",&str2);//sathvik
	len1=strlen(str1);
	len2=strlen(str2);
	str1[len1]=' ';
	len1=len1+1;
	for(int i=0;str2[i]!='\0';i++)
	{
		str1[len1]=str2[i];
		len1=len1+1;
	}
	str1[len1]='\0';
	printf("the combined string is %s",str1);
}
