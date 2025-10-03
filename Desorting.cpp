#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int arr1[n-1];
        int z;
        arr1[0]=arr[1]-arr[0];
        z=arr1[0];
        for(int i=1;i<n-1;i++){
            arr1[i]=arr[i+1]-arr[i];
            if(arr1[i]<z){
                z=arr1[i];
            }
        }
        if(z<0){
            cout<<0<<endl;
        }
        else cout<<z/2+1<<endl;
        t--;
    }
}