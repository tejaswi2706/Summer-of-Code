#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    vector<long long> v(n);
    long long x,k;
    if(n%2==0){
        k=n;
        x=n/2;
    }
    else{
        k=n-1;
        x=(n-1)/2;
    }
    // vector<long long> k(n);
    long long l=2;
    for(int i=0;i<x;i++){
        v[i]=l;
        l+=2;
    }
    long long p=1;
    for(int i=x;i<n;i++){
        v[i]=p;
        p+=2;
    }
    if((v[1]-v[0]==1) || (v[x]-v[x-1]==1) || (v[0]-v[1]==1) || (v[x-1]-v[x]==1)){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}