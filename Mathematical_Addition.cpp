#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        long long u,v;
        cin>>u>>v;
        cout<<(-1)*u*u<<" "<<v*v<<endl;
        t--;
    }
}