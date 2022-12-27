#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int principal, rate, time;
    float ci;
    system("cls");
    cout<<"Enter Principal Amount = ";
    cin>>principal;
    cout<<"Enter rate of interest = ";
    cin>>rate;
    cout<<"Enter Time Period = ";
    cin>>time;
    ci= principal*(pow(1+(rate/100.0),time));   //Typecasting is mandatory here in division part 
    system("cls");
    cout<<"Total Compound Interest is = "<<ci<<endl;
    return 0;
}