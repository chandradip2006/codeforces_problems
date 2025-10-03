#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        int ans=(n-1)*k+1;
        cout<<ans<<endl;
        t--;
    }
}