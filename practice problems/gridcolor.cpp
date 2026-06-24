#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> v(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i+j)%2==0){
                if(v[i][j]=='A'){
                    v[i][j]='B';
                }
                else v[i][j]='A';
            }
            else{
                if(v[i][j]=='C'){
                    v[i][j]='D';
                }
                else v[i][j]='C';
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
}