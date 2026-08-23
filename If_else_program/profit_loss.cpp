/* check it is profit or loss */
#include<stdio.h>
int main()
{
	float cp,sp;
	printf("Enter cost price:");
	scanf("%f",&cp);
	printf("Enter selling price:");
	scanf("%f",&sp);
	if(sp>cp)	
	 printf("profit: %.2f",sp-cp);
	else 
     printf("loss: %.2f",cp-sp);
	return 0; 
}
