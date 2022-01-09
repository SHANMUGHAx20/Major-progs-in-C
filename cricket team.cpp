/*Define a structure CRICKET whose fields are name of the player, number of innings
played, total runs scored and getting average. Using CRICKET declare an array x
with 50 elements and write a program to read the name, number of innings and total
runs scored by each of the 50 players and find the batting average. Display all the 50
players details sorted by batting average in tabular from*/
#include<stdio.h>
struct sathvik{
	char *name[100];
	int *ni;
	int *total;
	int *ba;
	int *x[50];
};
int main()
{
	scanf("%d",&sathvik.x);
	for(int i=1;i<=x;i++)
	{
	scanf("%s",sathvik->name);
 	scanf("%d",&sathvik.ni);
 	scanf("%d",&sathvik.total);
 	ba=total/ni;
 	printf("%d",ba);
   }
}
