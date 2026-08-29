/*sum of digits*/
#include<stdio.h>
int main()
{
	int i,n,r=0;
	printf("Enter number");
	scanf("%d",&n);
	for(;n != 0; n = n / 10)
   { 
	 sum=sum+(n%10);
   }
	printf("\nSum of digits = %d",sum); 
	printf("\n");
	return 0;
}
