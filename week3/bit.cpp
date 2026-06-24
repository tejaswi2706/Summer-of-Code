#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long t=1;
    long long MOD=(1e9+7);
    for(long long i=0;i<n;i++){
        t=2*t%MOD;
    }
    cout<<t<<endl;
    // cout<<sizeof(int)<<endl;
}