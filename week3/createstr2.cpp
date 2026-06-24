#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<string> v;
    sort(s.begin(),s.end());
    v.push_back(s);
    while(next_permutation(s.begin(),s.end())){
        v.push_back(s);
    }
    int ans=v.size();
    cout<<ans<<endl;
    for(auto a:v){
        cout<<a<<endl;
    }
}