#include<iostream>
using namespace std;
int main(){
    int sub1, sub2, sub3, sub4, sub5, sum;
    float percentage, average;
    system("cls");
    cout<<"Enter the marks of subjects = "<<endl;
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;
    system("cls");
    sum=sub1+sub2+sub3+sub4+sub5;
    average=sum/5;
    percentage=sum/5;
    system("cls");
    cout<<"Total marks = "<<sum<<endl;
    cout<<"Average of Marks is = "<<average<<endl;
    cout<<"Percentage is = "<<percentage<<endl;
    return 0;
}