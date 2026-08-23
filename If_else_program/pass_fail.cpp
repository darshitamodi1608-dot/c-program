/* check student is pass or fail */
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks of student:");
	scanf("%d",&marks);
	if(marks>=35)	
	 printf("PASS");
	else 
     printf("FAIL");
	return 0; 
}
