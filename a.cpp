#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<1<<" "<<1<<" ";
        for(int i= 2;i<=2+(n-5);i++){
            cout<<i<<" ";
        }
        cout<<1<<" "<<2<<endl;
    }
}