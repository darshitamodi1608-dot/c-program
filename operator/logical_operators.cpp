/* LOgical operators */
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter number1 : ");
	scanf("%d",&a);
	printf("Enter number2 : ");
	scanf("%d",&b);
	printf("\nLogical AND (a > 0 && b > 0) = %d", a > 0 && b > 0);
    printf("\n Logical OR  (a > 0 || b > 0) = %d", a > 0 || b > 0);
    printf("\nLogical NOT !(a > 0) = %d\n", !(a > 0));
	return 0;	
}
