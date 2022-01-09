/*Q1. Define a structure data type named date containing three integer members day, month and year.
 Write a function to read 10 different dates into structure members and print the date in the following format.
  January 09,2001*/
  #include<stdio.h>
  struct date
  {
  	int month;
  	int day;
  	int year;
  };
  struct date dt[10];
  int main()
  {
  	char m[12][100]={"Jan","feb","mar","apr"};
  	for(int i=0;i<1;i++)
  	{
  	printf("enter the date ");
  	scanf("%d%d%d",&dt[i].day,&dt[i].month,&dt[i].year);
  	printf("%s",m[dt[i].month-1]);
  }
  for(int i=0;i<1;i++)
  	{
  printf("%s %d,%d",dt[i].month,dt[i].day,dt[i].year);
}
}
