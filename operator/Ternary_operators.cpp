/*Ternary operators*/
#include<stdio.h>
int main()
{ int a,b,c;
	printf("Enter number1 : ");
	scanf("%d",&a);
	printf("Enter number2 : ");
	scanf("%d",&b);
	c=a>b?a:b;
	printf("Largest is %d",c);
	return 0;
}
