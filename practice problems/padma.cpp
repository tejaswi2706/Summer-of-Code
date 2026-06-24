#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your name please:"<<" ";
    string s;
    // cin>>s;
    getline(cin,s);
    cout<<"Year of Birth:"<<" ";
    int n;
    cin>>n;
    int age=2026-n;
    cout<<"Your Age:"<<" "<<age<<endl;
    if(age>=18){
        cout<<"You can get your bank account:)"<<endl;
    }
    else{
        cout<<"Hey kid! use your parents account :|"<<endl;
    }

}