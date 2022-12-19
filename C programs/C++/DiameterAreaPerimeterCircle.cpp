#include<iostream>
using namespace std;
int main(){
    system("cls");
    int radius, diameter, area, perimeter;
    cout<<"Enter the radius of a Circle"<<endl;
    cin>>radius;
    diameter=radius*2;
    area=radius*radius*3.14;
    perimeter=radius*2*3.14;
    system("cls");
    cout<<"Diameter of Circle is = "<<diameter<<endl;
    cout<<"Area of Circle is = "<<area<<endl;
    cout<<"Perimeter of Circle is = "<<perimeter<<endl;
    return 0;
}