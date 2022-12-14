#include<iostream>
using namespace std;
int main(){
    int l,b,perimeter,area;
    cout<<"Enter the length and width of a reactangle\n";
    cin>>l>>b;
    area=l*b;
    perimeter=2*(l+b);
    cout<<"Area of reactangle is = "<<area<<endl;
    cout<<"Perimeter of reactangle is = "<<perimeter<<endl;
    return 0;
}