#include<stdio.h>
int main (){
	int num;
	int sum = 0;
	printf("Enter a number : ");
	scanf("%d",&num);
	for (int i=1;i<=num;i++){
		if (i%2==0){
			sum =sum+i;
		}
	
	}
		printf("Sum of even number is %d",sum);
     return 0;
}
