#include<stdio.h>
int main()
{
	char a[100];
	char b[100];
	int flag=0;
	printf("enter the first string\n");
	scanf(" %s",a);
	printf("enter the second string\n");
	scanf(" %s",b);
	int first[26]={0};
	int second[26]={0};
	int c=0;
	for(int i=0;a[i]!='\0';i++)
	{
	    first[a[i]-'a']=first[a[i]-'a']+1;
	}
	for(int j=0;b[j]!='\0';j++)
	{
		second[b[j]-'a']=second[b[j]-'a']+1;
	}
	for(int k=0;k<26;k++)
	{
		if(first[k]==second[k])
		{
			flag=1;
		}

    }
    if(flag==1)
    printf("its a anagram");
    else
    printf("its not a anagram");
}
