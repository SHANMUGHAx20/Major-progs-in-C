#include<stdio.h>
int main()
{
    char str[100];
    scanf(" %s",&str);
    int c=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90)
        c=c+1;
    }
    printf("%d",c);
}
