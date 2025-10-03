#include<iostream>
using namespace std;
int Min(int arr[],int z1,int z2){
    int z=arr[z1];
    for(int i=z1;i<z2;i++){
        if(arr[i]<z){
            z=arr[i];
        }
    }
    return z;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        arr[j]=arr[j]-Min(arr,0,4);
    }
    for(int l=0;l<n;l++){
        cout<<arr[l];
    }
}