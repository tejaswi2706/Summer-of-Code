#include<iostream>
#include<vector>
using namespace std;
pair<int,vector<int>> sumOfThree(int n){
    // vector<pair<int,vector<int>>> v;
    vector<int> a;
    int x;
    if(n < 7){
        return {0, {}};
    }
    if(n % 3 != 0){
        x = n-3;
        if(x!=1 && x!=2){
            a.push_back(1);
            a.push_back(2);
            a.push_back(x);
            // v.push_back({1,a});
            }
        else return {0, {}};
    }
    else{
        x = n-5;
        if(x!=4 && x!=1){
            // x = n-5;
            a.push_back(1);
            a.push_back(4);
            a.push_back(x);
        }
        else return {0, {}};
        // v.push_back({1,a});
    }
    return {1, a};
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        pair<int, vector<int>> ans = sumOfThree(n);
        if(ans.first == 0) cout << "NO" << endl;
        else {
            cout<<"YES"<<endl;
            for(auto a : ans.second){
                cout << a << " ";
            }
            cout<<endl;
        }
    }
}