#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;

    if(sum % 2) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    long long k = sum / 2;

    vector<long long> a, b;

    for(long long i = n; i >= 1; i--) {
        if(i <= k) {
            a.push_back(i);
            k -= i;
        }
        else {
            b.push_back(i);
        }
    }

    cout << a.size() << '\n';
    for(auto x : a) cout << x << ' ';
    cout << '\n';

    cout << b.size() << '\n';
    for(auto x : b) cout << x << ' ';
    cout << '\n';
}