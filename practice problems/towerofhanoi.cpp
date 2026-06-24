#include<iostream>
using namespace std;
void towerofhanoi(int n,int from,int mid,int to){
    if(n==1){
        cout<<from<<" "<<to<<endl;
        return;
    }
    towerofhanoi(n-1,from,to,mid);
    cout<<from<<" "<<to<<endl;
    towerofhanoi(n-1,mid,from,to);
    return;
}

int main(){
    int n;
    cin>>n;
    int ans=(1LL<<n)-1;
    cout<<ans<<endl;
    towerofhanoi(n,1,2,3);
}