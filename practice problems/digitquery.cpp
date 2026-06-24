#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int q;
    cin>>q;
    vector<long long> v(q);
    for(int i=0;i<q;i++){
        cin>>v[i];
    }
    vector<int> ans(q);
    for(int i=0;i<q;i++){
        if(v[i]<10){
            ans[i]=v[i];
        }
        else ans[i]=0;
    }
    for(auto a:ans){
        cout<<a<<endl;
    }
}