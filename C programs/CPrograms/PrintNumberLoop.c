#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("Enter the number upto which you want to print\n");
    scanf("%d",&n);
    system("cls");
    for(i=1;i<=n;i++){
        
        fflush(stdout);
        printf("%d\n",i);
    }
    return 0;
}