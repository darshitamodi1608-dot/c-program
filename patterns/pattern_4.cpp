/*   6
    656
   65456
  6543456 
 654323456
65432123456

*/
#include<stdio.h>
int main()
{
 int i,j;
 for (i=6;i>=1;i--)
 {
  for (j=1;j<i;j++)
  printf(" ");
  for (j=6;j>=i;j--)
  
  printf("%d",j);
  for(j=i+1;j<=6;j++)
  printf("%d",j);
  printf("\n");
 }
 return 0;
}
