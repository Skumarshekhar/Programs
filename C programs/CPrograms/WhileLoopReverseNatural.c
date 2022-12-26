#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int i, n;
    system("cls");
    printf("Enter a number upto you want to print natural numbers in reverse = ");
    scanf("%d",&n);
    system("cls");
    i=n;
    while(i>=1){
        printf("%d",i);
        printf("\n");
        i--;
    }
    return 0;
}