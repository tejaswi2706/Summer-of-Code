#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<vector<int>> v(t,vector<int>(3));
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }
    
}