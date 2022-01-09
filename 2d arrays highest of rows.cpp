#include<stdio.h>
int main()
{
	int r,c;
	printf("enter the number of rows\n");
	scanf("%d",&r);
	printf("enter the number of colounms\n");
	scanf("%d",&r);
	int a[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		   scanf("%d",&a[i][j]);
		}
	}
    
    for(int j=0;j<r;j++)
    { 
     int max=a[0][j];
      for(int i=1;i<c;i++)
	  {
	  	if(max<a[i][j])
	  	{
	  	  max=a[i][j];	
		}
	  }	
	  printf("%d",max);
    }
}
