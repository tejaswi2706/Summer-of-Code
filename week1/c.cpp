#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

    int t;
    cin >> t;

    unordered_set<long long> cubes;

    for(long long i = 1; i*i*i <= 1e12; i++){
        cubes.insert(i*i*i);
    }

    while(t--){

        long long x;
        cin >> x;

        bool found = false;

        for(long long i = 1; i*i*i < x; i++){

            long long a = i*i*i;

            long long rem = x - a;

            if(cubes.count(rem)){
                found = true;
                break;
            }
        }

        if(found) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}