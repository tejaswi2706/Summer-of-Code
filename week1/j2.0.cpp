#include<iostream>
using namespace std;
int journey(int n, int a, int b, int c){
    int cycle = a + b + c;
    int d = n % cycle;
    int r = n / cycle;
    int ans;
    if(d == 0){
        ans = r * 3;
    }
    else if(d > (a + b)){
        ans = (r + 1)*3;
    }
    else if(d > a){
        ans = r * 3 + 2;
    }
    else if(d <= a){
        ans = r * 3 + 1;
    }
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