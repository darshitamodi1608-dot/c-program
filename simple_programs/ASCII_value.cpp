#include<stdio.h>
int main()
{
	char capital,small;
	printf("Enter any character");
	scanf("%c",&capital);
	small=capital-32;
	printf("Swaping value is %d ",small);
	return 0;
}
