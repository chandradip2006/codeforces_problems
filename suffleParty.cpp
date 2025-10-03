#include<iostream>
using namespace std;
int position(int n){
    int p=1;
    while(p<=n){
        p=p*2;
    }
    return p/2;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        cout<<position(n)<<endl;
        t--;
    }
}