#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int i, n;
    system("cls");
    printf("Enter a number upto you want to print Natural Numbers = ");
    scanf("%d",&n);
    i=1;
    system("cls");
    while(i<=n){
        printf("%d",i);
        printf("\n");
        i++;
    }
    return 0;
}