#include<stdio.h>
int main()
{
	char str[100];
	char ch[300]={0};
	char c;
	int i;
	int f;
	 f=0;
	printf("enter a string for inputn\n");
	scanf(" %[^\n]s",&str);
	 for(i=0;str[i]!=0;i++)
    	{
  	     ch[str[i]]++;
	    }
	  for(c=97;c<=122;c++)
	  {
	      if(ch[c]==0)
	      printf("the missing charecter is %c\n",c);
		  f=1;
       }
       if(f==1)
	   printf("the given string is not a panagram\n");
	   else
	   printf("the given string is a panagram\n");
}
