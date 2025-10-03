#include<iostream>
using namespace std;
int main(){
    int n,x,a;
    cin>>n>>x>>a;
    int z= a/x;
    if(n%z==0){
        cout<<n/z<<endl;
    }
    else cout<<n/z+1<<endl;
}