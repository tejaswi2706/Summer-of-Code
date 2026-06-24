#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> v(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    long long ans=1e18;
    for(int mask=0;mask<(1<<n);mask++){
        long long s=0;
        for(int i=0;i<n;i++){
            if(mask & (1<<i)){
                s+=v[i];
            }
        }
        ans=min(ans,llabs(sum-2*s));
    }
    cout<<ans<<endl;
}