#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    if(k>n){
        cout<<"-1"<<endl;
        return 0;
    }
    
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    if (k == 0) {
        if (v[0] == 1) cout << -1 << endl;
        else cout << v[0] - 1 << endl;
        return 0;
    }

    if (k == n) {
        cout << v[n-1] << endl;
        return 0;
    }
    int a=v[k-1];
    int b=v[k];
    if(a==b){
        cout<<"-1"<<endl;
        return 0;
    }
    int x=b-1;
    cout<<x<<endl;
}