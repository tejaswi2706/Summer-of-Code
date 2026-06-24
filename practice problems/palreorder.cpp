#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    long long n=s.length();
    vector<long long> v(26);
    for(long long i=0;i<n;i++){
        int g=int(s[i])-65;
        v[g]++;
    }   
    vector<int> ind;
    for(int i=0;i<26;i++){
        if(v[i]>0){
            ind.push_back(i);
        }
    }
    int l=ind.size();
    int a=0,b;
    for(int i=0;i<l;i++){
        if(a>1){
            break;
        }
        if(v[ind[i]]%2!=0){
            a++;
            b=char(ind[i]+65);
        }
    }
    if(a>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    vector<char> ans(n);
    if(n%2!=0){
        int f=n/2;
        ans[f]=b;
        v[int(b)-65]--;
    }
    int first=0,last=n-1;
    for(int i=0;i<l;i++){
        while(v[ind[i]]>0){
            ans[first]=char(ind[i]+65);
            ans[last]=char(ind[i]+65);
            first++;
            last--;
            v[ind[i]]-=2;
        }
    }
    string e;
    for(long long i=0;i<n;i++){
        e+=ans[i];
    }
    cout<<e<<endl;
}