#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

int horse(vector<int> v){
    set<int> s;
    for(int i = 0; i < v.size(); i++){
        s.insert(v[i]);
    }
    int ans = 4 - s.size();
    return ans;
}

int main(){
    vector<int> v;

    for(int i = 0; i<4 ; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int ans = horse(v);
    cout<<ans<<endl;
}