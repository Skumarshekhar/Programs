#include<iostream>
using namespace std;
int main(){
    int number1, number2, temp;
    system("cls");
    cout<<"Enter First Number = "<<endl;
    cin>>number1;
    cout<<"Enter Second Number = "<<endl;
    cin>>number2;
    system("cls");
    temp=number1;
    number1=number2;
    number2=temp;
    cout<<"Numbers After Swapping Number1 = "<<number1<<" Number2 = "<<number2<<endl;
    return 0;
}