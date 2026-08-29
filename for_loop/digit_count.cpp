/*Count of digits*/
#include<stdio.h>
int main()
{
	int i,n,count=0;;
	printf("Enter number");
	scanf("%d",&n);
	for(;n != 0; n = n / 10)
   { 
	 count++;
   }
	printf("\nTotal count = %d",count); 
	printf("\n");
	return 0;
}
