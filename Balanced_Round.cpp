#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i< n;i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<0<<endl;
        }
        else{
            sort(arr,arr+n);
            int idx[n+2], count=1;
            idx[0]=-1;
            for(int i=0;i<n-1;i++){
                if((arr[i+1]-arr[i])>k){
                    idx[count]=i;
                    count++;
                }
            }
            idx[count]=n-1;
            count++;
            if(count==2){
                cout<<0<<endl;
            }
            else{
                int z = idx[1]-idx[0];
                for(int i=1;i<count-1;i++){
                    z = max(z,idx[i+1]-idx[i]);
                }
                cout<<n-z<<endl;
            }
        }
    }
}