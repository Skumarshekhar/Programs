#include<stdio.h>
#include<math.h>
int main(){
    int number, power;
    float Ans;
    printf("Enter a number = ");
    scanf("%d",&number);
    printf("Enter its power = ");
    scanf("%d",&power);
    Ans=pow(number,power);
    printf(" Answer = %f",Ans);
    return 0;

}