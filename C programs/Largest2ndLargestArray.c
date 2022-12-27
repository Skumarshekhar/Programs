// A program to print the largest and second largest number of arra
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int arr[100], i, n, largest,sec_largest;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the element of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    sec_largest=arr[1];
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            sec_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>sec_largest&&arr[i]!=largest){
            sec_largest=arr[i];
        }
        system("cls");
        printf("Largest = %d\nSecond Largest = %d\n",largest, sec_largest);
    }
}