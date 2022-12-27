#include<iostream>
using namespace std;
class Abc{
    public:
    int number1, number2, sum, subtract;
    
    int add(){
        cout<<"Enter two numbers = "<<endl;
        cin>>number1>>number2;
        sum=number1+number2;
        cout<<"The Sum of two numbers are = "<<sum<<endl;
        return 0;
    }

    void sub(){
        subtract=number1-number2;
        cout<<"The Difference of two number is = "<<subtract<<endl;
    }
};
int main(){
    Abc object1;
    object1.add();
    object1.sub();
}