#include<stdio.h>
int main()
{
	int i,j,k=1;                                           
	for(i=1;i<=10;i++)                                         
	{  for(j=10;j>i;j--)                                     
		   printf(" ");                                   
	   { for(j=1;j<=i;j++)
	       printf("%d",j);
	       k++;
	       if(k==10)
	       k=1;
	   }
	   {
	   	for(j=i-1;j>=i;j--)                            
	       printf("%d",j);
	       k++;
	       if(k==10)
	       k=1;
		   printf("\n");
		} 
	}
	return 0;
}
