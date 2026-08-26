/*Minimum Purchase for free delivery*/
#include<stdio.h>
int main()
{	int value;
	printf("Enter cart value: ");
	scanf("%d",&value);
	if(value>=500)
	printf("  You are eligible for free delivery");
	else
	printf("  Add more items to get free delivery");
	return 0;
}
