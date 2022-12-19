#include<iostream>
using namespace std;
int main(){
    int number1, number2, sum, subtract, multiply;
    float divide;
    cout<<"Enter First Number = "<<endl;
    cin>>number1;
    cout<<"Enter Second Number = "<<endl;
    cin>>number2;
    sum=number1+number2;
    subtract=number1-number2;
    multiply=number1*number2;
    divide=number1/number2;
    system("cls");
    cout<<"Sum of two numbers are = "<<sum<<endl;
    cout<<"Subtraction of two numbers are = "<<subtract<<endl;
    cout<<"Multiplication of two numbers are = "<<multiply<<endl;
    cout<<"Division is = "<<divide<<endl;
    return 0;


}