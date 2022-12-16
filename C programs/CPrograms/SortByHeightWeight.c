#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int count=0, i;
    float wet, hit;
    printf("Enter weight and height for looop\n");
    for ( i = 1; i <=5; i++)
    {
        scanf("%f%f",&wet,&hit);
        if(wet<50 && hit>150){
            count=count+1;
        }
        
    }printf("Number of candidates with weight is less than 50 kgs and height is more than 150 cms = %d",count);
    return 0;
}