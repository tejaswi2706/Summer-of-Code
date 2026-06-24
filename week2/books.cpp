#include<iostream>
#include<vector>
using namespace std;

int books(int n, int t, vector<int> v){
    vector<int> k;
    long long a;
    for(int i = 0; i < n; i++){
        a = v[i];
        int c ;
        if( a > t ) c = 0;
        else c = 1;
        // cout<<"hi"<<endl;
        for(int j = i+1; j < n ; j++){
            
            a += v[j];
            if(a > t) break;
            // cout<<a<<endl;
            c++;
        }
        // cout<<"bo"<<endl;
        k.push_back(c);
    }
    int size = k.size();
    int l = 0;
    for(int i=0; i<size; i++){
        if(k[i]>=l) l = k[i];
        // cout<<k[i]<<endl;
    }
    // cout<<l<<endl;
    return l;
}

int main(){
    int n, t;
    cin>>n;
    cin>>t;
    vector<int> v;
    // int a;
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int ans = books(n, t, v);
    cout<<ans<<endl;
}