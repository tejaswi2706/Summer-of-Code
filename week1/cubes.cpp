#include<iostream>
#include<vector>
#include<set>
using namespace std;
set<long long> cube;
// for(long long i=0; i*i*i < 1e12; i++){
//     cube.ins
// }
int cubes(long long n){
    long long x;
    bool found = false;
    for(auto a : cube){
        if(a > n) break;
        x = n - a;
        if(cube.find(x) != cube.end()){
            found = true;
            break;
        }
    }
    if(found) return 1;
    return 0;
}


int main(){
    long long t;
    cin >> t;
    for(long long i = 1; i*i*i < 1e12; i++){
        cube.insert(i*i*i);
    }
    for(long long j = 0; j<t; j++){
        long long n;
        cin >> n;
        long long ans = cubes(n);
        if(ans == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}