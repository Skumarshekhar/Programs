#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int a, b, temp;
    system("cls");
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    system("cls");
    temp=a;
    a=b;
    b=temp;
    printf("Values after Swapping a = %d b = %d", a,b);
    return 0;
}