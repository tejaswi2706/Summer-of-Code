#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // cout<<"hi"<<endl;

    vector<long long> prefix(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }
    // cout<<"bo"<<endl;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        long long target = prefix[i] + t;

        int j = upper_bound(prefix.begin(), prefix.end(), target) - prefix.begin() - 1;
        ans = max(ans, j - i);
    }

    cout << ans << endl;
    
}