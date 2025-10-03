#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(mod(a-b)%2==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}