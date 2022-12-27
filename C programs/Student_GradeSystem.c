#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int marks;
    printf("Enter the marks obtained by a student\n");
    scanf("%d",&marks);
    system("cls");
    if (marks>=0 && marks<30){
        printf("Sorry...! You are Failed.");
    }
    else if (marks>=30 && marks<60)
    {
        printf("Grade C");
    }
    else if(marks>=60 && marks<80){
        printf("Grade B");
    }
    else            // marks should be less than and equal to 100
    {
        printf("Grade A");
    }
    return 0;
}