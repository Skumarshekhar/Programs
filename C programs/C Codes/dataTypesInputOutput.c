#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int a;              //declaring integer data type
    float b;              //declaring float data type
    char ch;            //declaring character data type
    double db;          // declaring double data type
    // now we take input of these different data types
    printf("Enter a number or an integer\n");
    scanf("%d",&a);         //here we are taking input in int data type
    printf("Enter a decimal value integer\n");
    scanf("%f",&b);         //here we are taking input in float data type
    printf("Enter a Character\n");
    fflush(stdin);
    scanf("%c",&ch);            // here we are taking input in character data type with %c
    printf("Enter a very long decimal value\n");
    scanf("%lf",&db);
    system("cls");         // here we are taking input in double data type, double means a very long decimal value

    // now we are going to print output
    printf("\n\n\n");
    printf("Int data type output from a = %d\n",a);
    printf("Float data type output from b = %f\n",b);
    printf("Char data type output from ch = %c\n",ch);
    printf("Double data type output from db = %lf",db);
}