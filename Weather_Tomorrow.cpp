#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag = true;
    for(int i=0;i<n-2;i++){
        if((arr[i+1]-arr[i])!=(arr[i+2]-arr[i+1])){
            flag =false;
        }
    }
    if(flag){
        cout<<arr[n-1]+(arr[1]-arr[0])<<endl;
    }
    else cout<<arr[n-1]<<endl;
}