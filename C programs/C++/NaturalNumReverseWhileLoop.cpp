#include<iostream>
using namespace std;
int main(){
    int i, n;
    system("cls");
    cout<<"Enter the number upto you want to print numbers in reverse"<<endl;
    cin>>n;
    i=n;
    system("cls");
    while(i>0){
        cout<<i<<endl;
        i--;
    }
    return 0;
}