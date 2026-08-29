/*Reverse of digits*/
#include<stdio.h>
int main()
{
	int i,n,r=0;
	printf("Enter number");
	scanf("%d",&n);
	for(;n != 0; n = n / 10)
   { 
	 r=r*10+(n%10);
   }
	printf("\nReverse of digits = %d",r); 
	printf("\n");
	return 0;
}
