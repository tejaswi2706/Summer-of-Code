#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    // for(long long i=1;i<=n;i++)
    vector<long long> a;
    vector<long long> b;
    long long sum=n*(n+1)/2;
    if(sum%2!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    long long s=sum/2;
    
    cout<<"YES"<<endl;
    long long k=n;
    for(long long i=n;i>=1;i--){
        if(i<=s){
            a.push_back(i);
            s=s-i;
        }
        else{
            b.push_back(i);
        }

    }
    cout<<a.size()<<endl;
    for(auto ai:a){
        cout<<ai<<" ";
    }
    cout<<endl;
    cout<<b.size()<<endl;
    for(auto bi:b){
        cout<<bi<<" ";
    }
    cout<<endl;
    // return 1;

}