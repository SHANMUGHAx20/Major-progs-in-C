#include<stdio.h>
int main()
{
	int r1,c1,r2,c2;
	printf("enter the number of rows and coloumns for the 1st matrix\n ");
	scanf("%d%d",&r1,&c1);
	printf("enter the number of rows and coloumns for the 2ed matrix\n ");
	scanf("%d%d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
		int a[r1][c1],b[r2][c2],i,j;
		printf("elements of 1st matrix\n")
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("elements of 2st matrix\n")
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		int c[r1][c1];
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("the resultant matrix is\n")
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d",c[i][j]);
			}
			printf("\n");
		}
	}
}
