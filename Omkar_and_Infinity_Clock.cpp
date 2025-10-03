#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        long long k;
        cin>>n>>k;
        int arr[n] , count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if((k-1)%2==0){
            int z=arr[0];
            for(int i=0;i<n;i++){
                if (arr[i]>z){
                    z=arr[i];
                }
            }
            for(int i=0;i<n;i++){
                cout<<z-arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            int z=arr[0];
            for(int i=0;i<n;i++){
                if (arr[i]>z){
                    z=arr[i];
                }
            }
            for(int i=0;i<n;i++){
                arr[i]=z-arr[i];
            }
            int z1=arr[0];
            for(int i=0;i<n;i++){
                if (arr[i]>z1){
                    z1=arr[i];
                }
            }
            for(int i=0;i<n;i++){
                cout<<z1-arr[i]<<" ";
            }
            cout<<endl;
        }
        t--;
    }
}