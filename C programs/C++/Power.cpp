#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b;
    system("cls");
    cout<<"Enter a number = ";
    cin>>a;
    cout<<"Put its power = ";
    cin>>b;
    float power=pow(a,b);
    system("cls");
    cout<<"Result is = "<<power;
    return 0;
}