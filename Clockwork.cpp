#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool flag = true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<=2*max(i,n-1-i)){
                flag = false;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}