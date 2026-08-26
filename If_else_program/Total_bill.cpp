/*Discount offer*/
#include<stdio.h>
int main()
{
	float bill;
	printf("Enter the bill amount: ");
	scanf("%f",&bill);
	if(bill>1000)
	printf(" Final bill after discount: %f",bill*0.9);
	else
	printf(" Final bill after discount:%f",bill);
	return 0;
}
