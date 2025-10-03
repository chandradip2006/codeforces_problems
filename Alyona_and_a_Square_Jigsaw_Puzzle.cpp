#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0 , count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
            if(sum==1){
                count++;
            }
            else{
                int z=sum-1 , j=1;
                while(z>0){
                    z=z-8*j;
                    j++;
                }
                if(z==0){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}