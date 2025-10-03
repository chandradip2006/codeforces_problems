#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=mod(arr[i]);
    }
    int z= arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<z){
            z=arr[i];
        }
    }
    cout<<z<<endl;
}