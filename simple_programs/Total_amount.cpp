#include<stdio.h>
int main()
{
	int rate1,rate2,rate3,qty1,qty2,qty3,total;
	printf("Enter rate of pizza");
	scanf("%d",&rate1);
	printf("Enter quantity of pizza");
	scanf("%d",&qty1);
	printf("Enter rate of burger");
	scanf("%d",&rate2);
	printf("Enter quantity of burger");
	scanf("%d",&qty2);
	printf("Enter rate of coffee");
	scanf("%d",&rate3);
	printf("Enter quantity of coffee");
	scanf("%d",&qty3);
	total=rate1*qty1+rate2*qty2+rate3*qty3;
	printf("Total is %d ",total);
	return 0;
}
