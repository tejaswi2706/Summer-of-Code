#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=n;i>1;i--){
        ans*=i;
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    int n=s.length();
    vector<int> v(26);
    for(int i=0;i<n;i++){
        int g=int(s[i])-97;
        v[g]++;
    }
    vector<int> nemp;
    for(int i=0;i<26;i++){
        if(v[i]!=0){
            nemp.push_back(i);
        }
    }
    int e=nemp.size();
    int ans=fact(n);
    for(int i=0;i<e;i++){
        ans=ans/fact(v[nemp[i]]);
    }
    cout<<ans<<endl;
    
}