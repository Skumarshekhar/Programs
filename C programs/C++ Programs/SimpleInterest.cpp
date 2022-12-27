#include<iostream>
using namespace std;        // A c++ program to find the simple interest, system("cls") is used to clear 
int main(){                 // the screen only you may use or may not
    int principal, rate, time, simple_interest;
    system("cls");
    cout<<"Enter principal amount\n";
    cin>>principal;
    system("cls");
    cout<<"Enter rate of interest\n";
    cin>>rate;
    system("cls");
    cout<<"Enter the time period\n";
    cin>>time;
    system("cls");
    simple_interest=(principal*rate*time)/100;
    cout<<"Simple Interest is = "<<simple_interest;
    return 0;
}