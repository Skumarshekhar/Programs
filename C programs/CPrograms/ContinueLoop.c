#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int i;
    float number, sum=0;
    for ( i = 1; i <=10; ++i)
    {
        printf("Enter n%d:",i);
        scanf("%f",&number);
        system("cls");
        sum=sum+number;
    if (number<0.0)
    {
        continue;
        sum=sum+number;
    }
    printf("Sum is = %f",sum);
    }
    
    return 0;
    
    
}