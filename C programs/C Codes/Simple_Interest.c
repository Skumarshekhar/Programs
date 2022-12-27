#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int principal, rate, time, simple_interest;
    system("cls");          // this line is used to clear the screen you may use or not
    printf("Enter Principal Amount\n");
    scanf("%d",&principal);
    system("cls");          // this line is used to clear the screen you may use or not
    printf("Enter rate of interest\n");
    scanf("%d",&rate);
    system("cls");          // system("cls") is used to clear the screen only youu may use or not
    printf("Enter the time period\n");
    scanf("%d",&time);
    system("cls");          // this line works also same as above written 
    simple_interest=(principal*rate*time)/100;
    printf("Simple Interest is = %d",simple_interest);
    return 0;
}