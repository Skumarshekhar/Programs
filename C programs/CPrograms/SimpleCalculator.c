#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int a,b,choice;
    int c;
    char ch;
    system("cls");
    do{
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Enter your choice\n");
    printf("1.Add\n2.Substract\n3.Multiplication\n4.Divide\n");
    scanf("%d",&choice);
        system("cls");
        switch (choice)
    {
    case 1:
        c=a+b;
        printf("The sum of numbers is = %d\n",c);
    case 2:
        c=a-b;
        printf("The difference of two numbers are = %d\n",c);
    case 3:
        c=a*b;
        printf("Multiplication of numbers are = %d\n",c);
    case 4:
        c=a/b;
        printf("After division of numbers result are = %d\n",c);
    
    default:
        printf("Do you want to continue----(Y/N)");
        fflush(stdin);
        scanf("%c",&ch);
    }
    } while(ch=='y'||ch=="Y");
    return 0;
    
    
}