#include<stdio.h>
int add(int a, int b);
int main()
{
	int a,b;
	int sum=add(a, b);
	printf("total is = %d",sum);
	
	
}
int add(int a, int b)
{
	printf("enter two numbers\n");
	
	scanf("%d%d",&a,&b);
	return a+b;
}
