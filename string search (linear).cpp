#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("enter the  number of words\n");
	scanf("%d",&n);
	char str[n][100];
	int i,flag=0;
	printf("enter words\n");
	for(i=0;i<n;i++)
	{
		scanf(" %s",&str[i]);
	}
	printf("key\n");
	char key[100];
	scanf(" %s",&key);
	for(i=0;i<n;i++)
	{
		if(strcmp(key,str[i])==0)
		{
			printf("search string fount at %d",i);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("search element not found");
	}
	
}
