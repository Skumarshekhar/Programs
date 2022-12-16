#include<iostream>
using namespace std;
int main(){
    int set_password;
    int default_password;
    cout<<"Set your password\n";
    cin>>set_password;
    system("cls");
    cout<<"Enter your password to Unlock\n";
    cin>>default_password;
    system("cls");
    if (set_password==default_password)
    {
        cout<<"Device Unlocked";
    }
    else{
        cout<<"Wrong Password";
    }
    return 0;
    
}