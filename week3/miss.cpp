#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long x=n*(n+1)/2;
    long long y=0;
    // cout<<"Hi"<<endl;
    for(long long i=0;i<n-1;i++){
        long long k;
        cin>>k;
        y+=k;
    }
    long long ans=x-y;
    cout<<ans<<endl;
    return 0;
}