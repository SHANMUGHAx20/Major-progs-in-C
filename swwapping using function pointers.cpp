#include<stdio.h>
int swap(int *x, int *y);
int main()
{
    int x,y;
    printf("enter any 2 numbers\n");
    printf("the value of a is = ");
    scanf("%d",&x);
    printf("the value of b id = ");
    scanf("%d",&y);
	swap(&x,&y);
    printf("the swapped value of b is = %d\nthe swapped value of a is = %d",x,y);
}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

