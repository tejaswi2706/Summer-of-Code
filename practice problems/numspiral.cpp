#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long t;
    cin>>t;
    vector<pair<long long,long long>> d;
    long long y,x;
    long long ans;
    for(long long i=0;i<t;i++){
        cin>>y>>x;
        d.push_back({y,x});
    }
    for(auto a:d){
        y=a.first;
        x=a.second;
        //         int y,x;
        // int ans;
        // cin>>y>>x;
        if(x>=y){
            if(x%2==0){
                ans=((x-1)*(x-1))+y;
            }
            else{
                ans=(x*x)-y+1;
            }
        }
        else{
            if(y%2==0){
                ans=(y*y)-x+1;
            }
            else{
                ans=((y-1)*(y-1))+x;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}