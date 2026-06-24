#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }
    long long sum = 0;

    for(int i = 0; i < k; i++) {
        sum += h[i];
    }

    long long mn = sum;
    int ans = 1;

    for(int i = k; i < n; i++) {
        sum -= h[i-k];
        sum += h[i];

        if(sum < mn) {
            mn = sum;
            ans = i - k + 2;
        }
    }
    cout<<ans<<endl;
}