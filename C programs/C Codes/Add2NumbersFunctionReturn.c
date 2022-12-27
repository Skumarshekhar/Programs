#include<stdio.h>
int sum();
int main()
{
	int a, b;
	printf("going to calculate the sum of two numbers\n");
	int s= sum();
	printf("the sum is = %d", s);
	
}
int sum()
{
	int a, b;
	printf("enter two numbers\n");
	scanf("%d%d", &a,&b);
	return a+b;
}
