#include<stdio.h>
int main()
{
	char capital,small;
	printf("Enter any character");
	scanf("%c",&small);
	capital=small-32;
	printf("ASCII value %d ",capital);
	return 0;
}
