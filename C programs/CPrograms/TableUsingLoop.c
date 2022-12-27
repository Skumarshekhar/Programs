// A C program to display n tables using loop 
#include<stdio.h>
int main()
{
	int i;
	int n;
	printf("Enter the number of which table you want\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=10;j++)
		{
			printf("%d\n",i*j);
		}
	}
	return 0;
}
