#include<stdio.h>
int main()
{
	float base,height,area;
	printf("Enter height of triangle");
	scanf("%f",&height);
	printf("Enter base of triangle");
	scanf("%f",&base );
	area=0.5*base*height;
	printf("Area of triangle is %f",area);
	return 0;
}
