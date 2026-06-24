#include<iostream>
using namespace std;
int minCap(int n, int A[], int x){
    int p = n + 1;
    int B[p];
    B[0] = A[0] - 0;
    B[p-1] = 2 * ( x - A[n-1] );
    for (int i = 1 ; i < p-1 ; i++){
        B[i] = A[i] - A[i-1];
    }
    int ans = 0;
    for(int i=0; i<p ; i++){
        if(B[i] > ans) ans = B[i];
    }
    return ans;
}

int main(){
    int j;
    cin >> j;
    for(int v = 0; v<j ; v++){int n, x;
    cin>>n;
    cin>>x;
    int A[n];
    int l;
    for(int i = 0; i<n; i++){
        cin>>l;
        A[i] = l;
    }
    int ans = minCap(n, A, x);
    cout<<ans<<endl;}
}