#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(r==1){
            cout<<1<<endl;
        }
        else {
            cout<<r-l<<endl;
        }
    }
}