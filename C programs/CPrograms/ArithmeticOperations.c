#include<stdio.h>
int addition(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float division(float a, float b);
int mod(int a, int b);
int main()
{
	int num1, num2;
	printf("Enter the first number:");
	scanf("%d", &num1);
	printf("Enter the second number");
	scanf("%d", &num2);
	printf("Arithmetic operations on %d and %d: \n", num1, num2);
	printf("Addition:%d\n", addition(num1, num2));
	printf("Substraction: %d\n", subtract(num1, num2));
	printf("Multiplication: %d\n", multiply(num1, num2));
	printf("Division :%f\n", division(num1, num2));
	printf("Modulus: %d\n", mod(num1, num2));
	return 0;
	
}
int addition(int a, int b)
{
	int sum=a+b;
	return sum;
}
int subtract(int a, int b)
{
	int difference=a-b;
	return difference;
}
int multiply(int a, int b)
{
	int multiply=a*b;
	return multiply;
}
float division(float a, float b)
{
	float divide=a/b;
	return divide;
}
int mod(int a, int b)
{
	int rem=a%b;
	return rem;
}
