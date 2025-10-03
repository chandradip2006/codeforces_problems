#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float n , k;
        cin>>n>>k;
        float z=((n-1)*n)/2;
        float d=z-k;
        if((n*n-4*d)<0){
            cout<<"NO"<<endl;
        }
        else{
            int p=sqrt(n*n-4*d);
            if(p*p==(n*n-4*d)){
                cout<<"YES"<<endl;
                int a=(n-sqrt(n*n-4*d))/2;
                for(int i=0;i<a;i++){
                    cout<<"-1 ";
                }
                for(int i=a;i<n;i++){
                    cout<<"1 ";
                }
                cout<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}