#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b = a;
    sort(b.begin(), b.end());

    int l = 0;
    while(l < n && a[l] == b[l]) {
        l++;
    }

    if(l == n) {
        cout << "yes"<<endl;
        cout << "1 1"<<endl;
        return 0;
    }

    int r = n - 1;
    while(r >= 0 && a[r] == b[r]) {
        r--;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if(a == b) {
        cout << "yes"<<endl;
        cout << l + 1 << " " << r + 1 << endl;
    }
    else {
        cout << "no"<<endl;
    }

}