#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int set_password;
    int default_password=1234;
    printf("set your password");
    scanf("%d",&default_password);
    system("cls");
    printf("Enter your password\n");
    scanf("%d",&set_password);
    system("cls");
    if (set_password==default_password)
    {
        printf("Unlocked");
    }
    else{
        printf("Wrong Password");
    }
    return 0;
}