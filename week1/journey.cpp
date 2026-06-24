#include<iostream>
#include<vector>
using namespace std;
int journey(int n, int a, int b, int c){
    // vector<int>  v;
    int h = 0;
    int ans = 0;
    if(n <= 0 || a <= 0 || b<=0 || c<=0) return -1;
    if(a == 1 && b == 1 && c == 1) return n;
    // if(n <= a) return 1;
    for(int i = 0; ; i++){
        if(i%3 == 0){
            h += a;
        }
        else if((i + 2)%3 == 0){
            h += b;
        }
        else h += c;
        // v.push_back(h);
        ans++;
        if(h >= n) break;
    }
    // int ans = v.size();
    
    return ans;
}
int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n,a,b,c;
        cin>>n;
        cin>>a;
        cin>>b;
        cin>>c;
        int ans = journey(n,a,b,c);
        cout<<ans<<endl;
    }
}