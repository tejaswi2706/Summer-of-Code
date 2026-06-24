#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int count=1,k=1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            if(count>k){
                k=count;
            }
            count=1;
        }
    }
    // k=count;
    if(count>k) k=count;
    cout<<k<<endl;
    return 0;
}