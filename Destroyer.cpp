#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int c[101];
        for(int i=0;i<101;i++){
            c[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>arr[i];
            c[arr[i]]++;
        }
        bool flag=true;
        for(int i=0;i<100;i++){
            if(c[i]<c[i+1]){
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