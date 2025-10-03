#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int z= n%10;
        int x=n%7;
        if(z>x){
            cout<<n-x<<endl;
        }
        else cout<<n+(7-x)<<endl;
        t--;
    }
}