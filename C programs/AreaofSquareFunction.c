#include<stdio.h>
int area();
int main()
{
	printf("Going to calculate the area of square\n");
	int a=area();
	printf(" The area is = %d", a);
	
}
int area()
{
	int side;
	printf("enter the side of a square\n");
	scanf("%d", &side);
	return side*side;
}
