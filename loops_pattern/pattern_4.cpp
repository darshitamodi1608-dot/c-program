/*        6
        6 5 6
      6 5 4 5 6
    6 5 4 3 4 5 6
  6 5 4 3 2 3 4 5 6  
6 5 4 3 2 1 2 3 4 5 6  
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=6;i>=1;i--)
	{
	 for(j=1;j<i;j++)
	 printf(" ");
	 for(j=6;j>=i;j--)
	 printf("%d",j);
	 for(j=i+1;j<=6;j++)	
	 printf("%d",j);
	 printf("\n");
	}
	return 0;
} 
