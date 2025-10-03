#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
        }
        else{
            sort(a,a+n);
            bool flag= true;
            for(int i=0;i<n-1;i++){
                if(abs(a[i]-a[i+1])>1){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}