#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k%(n-1)==0){
            int z=k/(n-1)-1;
            cout<<z*n+(n-1)<<endl;
        }
        else{
            int z=k/(n-1);
            cout<<z*n+k%(n-1)<<endl;
        }
    }
}