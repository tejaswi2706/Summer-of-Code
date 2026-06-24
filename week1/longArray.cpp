#include<iostream>
#include<vector>
using namespace std;
int LongGoodArr(int l, int r){
    int ans = 0;
    int x = r - l + 1;
    vector<int> v;
    int c = l;
    v.push_back(c);
    for(int i = 1; i < x; i++){
        if(c + i > r) break;
        c = c + i;
        v.push_back(c);
    }
    ans = v.size();
    return ans;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){int l, r;
    cin>>l;
    cin>>r;
    int ans = LongGoodArr(l,r);
    cout<<ans<<endl;}
}