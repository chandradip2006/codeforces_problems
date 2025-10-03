#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%2==0){
            if((n/2)%2==0){
                cout<<n/2<<" ";
                int z= n/4;
                cout<<z<<" "<<z<<endl;
            }
            else{
                cout<<2<<" ";
                int z=(n-2)/2;
                cout<<z<<" "<<z<<endl;
            }
        }
        else{
            cout<<1<<" ";
            int z=(n-1)/2;
            cout<<z<<" "<<z<<endl;
        }
    }
}