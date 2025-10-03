#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else{
        return (-1)*x;
    }
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n;i++){
            cin>>arr[i];
        }
        bool flag = true;
        for(int i=0;i<n-1;i++){
            if(mod(arr[i]-arr[i+1])!=5&&mod(arr[i]-arr[i+1])!=7){
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        t--;
    }
}