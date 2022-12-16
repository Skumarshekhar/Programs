#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int a,b,choice;
    int c;
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
        break;
    case 2:
        c=a-b;
        printf("The difference of two numbers are = %d\n",c);
        break;
    case 3:
        c=a*b;
        printf("Munltiplication of numbers are = %d\n",c);
        break;
    case 4:
        c=a/b;
        printf("After division of numbers result are = %d\n",c);
        break;
    
    default:
        break;
    }
    return 0;
    
    
}