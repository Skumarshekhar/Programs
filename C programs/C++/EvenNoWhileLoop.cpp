#include<iostream>
using namespace std;
int main(){
    system("cls");
    int i;
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    system("cls");
    i=1;
    while(i<=n){
        if(i%2==0){
            cout<<i<<" ";
            i++;
        }
    }
}