/* Electric bill charges*/
#include<stdio.h>
int main()
{
	float bill;
	printf("Enter the bill amount: ");
	scanf("%f",&bill);
	if(bill>500)
	 { bill=bill+50;
	  printf(" Final bill : %f",bill);
     }
	else
	 printf(" Final bill :%f",bill);
	return 0;
}
