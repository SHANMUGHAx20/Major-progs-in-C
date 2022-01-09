#include<stdio.h>
int main()
{
	int r,c;
	printf("enter the number of rows\n");
	scanf("%d",&r);
	printf("enter the number of colounms\n");
	scanf("%d",&c);
	int a[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		   scanf("%d",&a[i][j]);
		}
	}
    
    for(int i=0;i<c;i++)
    { 
     int max=a[i][0];
      for(int j=1;j<r;j++)
	  {
	  	if(max<a[i][j])
	  	{
	  	  max=a[i][j];	
		}
	  }	
	  printf("%d",max);
    }
}
