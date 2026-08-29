/*Sum_N_Natural_Numbers*/
#include<stdio.h>
int main()
{
	int i,n;
	int sum=0;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  sum=sum+i;
	  printf("\nSum :%d",sum);
	printf("\n");
	return 0;
}
