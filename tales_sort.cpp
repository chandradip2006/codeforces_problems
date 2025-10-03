#include<iostream>
using namespace std;
int max(int arr[], int n){
    int z= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>z){
            z=arr[i];
        }
    }
    return z;
}
int count(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(max(arr,n)==arr[n-1]){
        return count(arr,n-1);
    }
    else{
        return max(arr,n);
    }
}
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
        cout<<count(arr,n)<<endl;
        t--;
    }
}