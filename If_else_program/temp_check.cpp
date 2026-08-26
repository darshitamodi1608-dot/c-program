/*check the temperature is normal or not*/
#include<stdio.h>
int main()
{
	int temp;
	printf("Enter the current temperature: ");
	scanf("%d",&temp);
	if(temp>40)
	printf("Heat alert");
	else
	printf("Temperature is normal");
	return 0;
}
