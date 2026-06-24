#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<pair<long long,long long>> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    for(long long i=0;i<n;i++){
        long long a=v[i].first, b=v[i].second;
        if((((a+b)%3==0) && ((a>0)&&(b>0)) && (max(a,b)<=2*(min(a,b)))) || ((a==0) && (b==0))){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}