/*Even numbers or odd number*/
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	 if(i%2==0)
	  printf("\nEven numbers :%d",i);
	 else
	  printf("\nOdd numbers  :%d",i);
	printf("\n");
	return 0;
}
