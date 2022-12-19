#include<iostream>
using namespace std;
int main(){
    float meter, cm, km;
    system("cls");
    cout<<"Enter the length in Meter = "<<endl;
    cin>>meter;
    cm=meter*100;
    km=meter/1000;
    meter=meter*1;
    system("cls");
    cout<<"Total Length in Meter is = "<<meter<<endl;
    cout<<"Total length in Centi Meter is = "<<cm<<endl;
    cout<<"Total length in Kilo Meter is = "<<km<<endl;
    return 0;
}