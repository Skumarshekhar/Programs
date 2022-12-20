#include<stdio.h>
int main(){
    char ch;
    do{
        printf("\n\nloop is working\n");

        printf("Do you want to continue? (Y/N): ");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');
    return 0;
}