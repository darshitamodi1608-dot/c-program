#include<stdio.h>
int main()
{
	int i,j;
	for(i='A';i<='H';i++)
	{
		for(j=64;j<='F';j++)
		  if(i=='A'|| i=='H'|| j<i-1)
		   printf("*");
		  else
		   printf("%c",j);
		   printf("\n"); 
	}
	
	return 0;
}
