/*Q2. Define user defined data type Book. A Book structure contains its title, author name, 
ISDN number and price. Implement a program to read N number of books information and then arrange 
those records in sorted order based on its price*/
#include<stdio.h>
struct book{
	char title[100];
	char author[100];
	int isd;
	int price;
};
int main()
{
	int n;
	printf("enter the number of times u want the array to run\n");
	scanf("%d",&n);
	struct book b[n];
    int i;
    for(i=0;i<n;i++)
    {
    	printf("enter the details accordingly\n");
    	printf("Name of the author:");
    	scanf(" %s",&vab[i].author);
        printf("\nTitle of the book:");
    	scanf(" %s",&b[i].title);
    	printf("\nISD number:");
    	scanf("%d",&b[i].isd);
    	printf("\nPrice:");
    	scanf("%d",&b[i].price);
	}
  int swap;
  for (i=0;i<n-1;i++)
  {
    for (int j=0;j<n-i-1;j++)
    {
      if (b[j].price>b[j+1].price) 
      {
        swap=b[j].price;
        b[j].price=b[j+1].price;
        b[j+1].price=swap;
      }
    }
  }
  for(i=0;i<n;i++)
  {
  	printf("\nthe data after sorting is \n");
  	printf("Name of the author:%s\n",b[i].author);
  	printf("\nTitle of th book is:%s\n",b[i].title);
  	printf("\nISD:%d\n",b[i].isd);
  	printf("\nprice:%d\n",b[i].price);
  }
}

