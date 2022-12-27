#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int i, n;
    system("cls");
    printf("Enter the number of which table you want to print = ");
    scanf("%d",&n);
    system("cls");
    i=1;
    while(i<=10){
        printf("%d * %d = %d",i,n,(i*n));
        printf("\n");
        i++;
    }
    return 0;

}