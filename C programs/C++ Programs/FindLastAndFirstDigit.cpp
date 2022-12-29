#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter any number to find thier first and last digits = ";
    cin>>number;
    system("cls");
    while(number!=0){
        int digit;
        digit=(number%10);
        cout<<digit<<endl;
        number=number/10;
    }
    return 0;
}