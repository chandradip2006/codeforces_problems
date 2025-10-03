#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,m;
        cin>>n>>m;
        if((n==2&&m==3)||(n==3&&m==2)||(n==3&&m==3)){
            cout<<2<<" "<<2<<endl;
        }
        else {
            cout<<1<<" "<<1<<endl;
        }
        t--;
    }
}