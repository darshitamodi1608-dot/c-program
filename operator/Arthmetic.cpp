/* Arithmetic operators */
#include<stdio.h>
int main()
{
	int n1,n2,sum,sub,multi,div,mod;
	printf("Enter number1 : ");
	scanf("%d",&n1);
	printf("Enter number2 : ");
	scanf("%d",&n2);
	sum=n1+n2;
	multi=n1*n2;
	sub=n1-n2;
	div=n1/n2;
	mod=n1%n2;
	printf("\n Sum is %d ",sum);
	printf("\n Multiples is %d",multi);
	printf("\n Subtraction is %d",sub);
	printf("\n Division is %d",div);
	printf("\n Modulus is %d",mod);
	return 0;	
}
