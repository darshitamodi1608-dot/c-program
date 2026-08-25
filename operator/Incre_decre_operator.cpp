/*Increment and Decrement operator*/
#include<stdio.h>
int main()
{ int a;
  printf("Enter number1 : ");
  scanf("%d",&a);
  printf("\nIncrement of a = %d",a++);
  printf("\nDecrement of a = %d",a--);
  printf("\nIncrement of a = %d",++a);
  printf("\nDecrement of a = %d",--a);
  return 0;	
}
