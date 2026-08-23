/* check which number is largest in 3 number */
#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter number 1:");
	scanf("%d",&n1);
	printf("Enter number 2 :");
	scanf("%d",&n2);
	printf("Enter number 3 :");
	scanf("%d",&n3);
	if(n1>n2 || n1>n3)	
	 printf("N1 is largest");
	else 
	 if(n2>n3)
	   printf("N2 is largest");
	 else
	   printf("N3 is largest");
	return 0; 
}
