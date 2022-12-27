// A C program to find the sum and average of n natural numbers 
#include<stdio.h>
int main()
{
	int i; int n;
	int sum=0;
	float average;
	printf("Enter the natural numbers\n");
	scanf("%d",&n);
	printf("Enterd natural numbers are\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("The sum of natural numbers are = %d\n",sum);
	average=sum/n;
	printf("Average is = %2f\n",average);
	return 0;
}
