#include<stdio.h>
void sum();
int main()
{
	printf("going two calculate the sum of two numbers\n");
	sum();
}
void sum()
{
	int a, b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("The sum is = %d", a+b);
	
}
