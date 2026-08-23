/* check number is positive negative or zero*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	if(n<0)
	 printf("Number is negative");
	else 
	  if(n>0)
	   printf("Number is positive"); 
	  else
	   printf("Number is zero");
	 
	return 0; 
}
