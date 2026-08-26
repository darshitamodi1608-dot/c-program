/*Senior Citizen checker*/
#include<stdio.h>
int main()
{
	int age;
	printf("Enter age: ");
	scanf("%d",&age);
	if(age>=60)
	printf(" You are a senior citizen.");
	else
	printf(" You are not a senior citizen.");
	return 0;
}
