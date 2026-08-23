/* WAP to do grade calculation */
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);
	if(marks>=95)	
	 printf("GRADE A");
	else 
     if(marks>=85)	
	 printf("GRADE B");
   	else
	 if(marks>=75)	
	 printf("GRADE C");
	else
	 if(marks>=65)	
	 printf("GRADE D");
	else	
	 printf("FAIL");
	return 0; 
}
