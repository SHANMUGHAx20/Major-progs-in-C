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
 struct student stud[10];
 int main()
 {
 	int i;
   for(i=0;i<10;i++)
   {
     printf("enter the details of  student \n");
	 printf("name");
	 scanf(" %s",stud[i].name);   
	 printf("ID");
	 scanf( "%d",&stud[i].id);
	 printf("branch");
	 scanf( " %s",stud[i].branch);
	 printf("total");
	 scanf( "%d",&stud[i].total);    
	 }     	
	 for(i=0;i<10;i++)
	 {
	 if(stud[i].total>40)
	 {
	 printf("name %s : ",stud[i].name);
	 printf("ID %d",stud[i].id);
	 printf("branch %s",stud[i].branch);
	 printf("total %d\n",stud[i].total);
	    	
	 }
   }	
 }
