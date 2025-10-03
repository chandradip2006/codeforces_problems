#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,a,b;
        cin>>n>>a>>b;
        if(2*a<b){
            cout<<n*a<<endl;
        }
        else{
            int z=n/2;
            int r=n%2;
            int min=z*b+r*a;
            cout<<min<<endl;
        }
        t--;
    }
}