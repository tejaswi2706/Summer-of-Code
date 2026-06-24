#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int digquery(long long k){
    long long first = 1;
    int digits = 1;
    while (k > 9LL * first * digits) {
        k -= 9LL * first * digits;
        first *= 10;
        digits++;
    }
    long long number = first + (k - 1) / digits;

    int pos = (k - 1) % digits;

    return to_string(number)[pos] - '0';
}

int main(){
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int ans=digquery(v[i]);
        cout<<ans<<endl;
    }
}