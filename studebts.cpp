/*Define a structure student with fields name, id, branch, total_marks. Read the data for 10 students and print
 the data of students who secured more than 40 marks*/
 #include<stdio.h>
 struct student
 {
 	char name[100];
 	int id;
 	char branch[100];
 	int total;
 };
 struct student st[10];
 int main()
 {
   for(int i=0;i<5;i++)
   {
     printf("enter the details of %d student \n",i+1);
	 printf("name : ");
	 scanf(" %s",&st[i].name);   
	 printf("ID : ");
	 scanf( "%d",&st[i].id);
	 printf("branch : ");
	 scanf( " %s",&st[i].branch);
	 printf("total : ");
	 scanf( "%d",&st[i].total);    
	 }     	
	 for(int i=0;i<5;i++)
	 {
	 if(st[i].total>40)
	 {
	 printf("name : ");
	 printf( "%s",st[i].name);   
	 printf("ID : ");
	 printf( "%d",st[i].id);
	 printf("branch : ");
	 printf( "%s",st[i].branch);
	 printf("total : ");
	 printf( "%d\n",st[i].total);    
	    	
	 }
   }	
 }
