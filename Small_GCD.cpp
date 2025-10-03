#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int GCD(int x , int y){
    if(x==0){
        return y;
    }
    else{
        int temp = y;
        y=x;
        x=temp%x;
        return GCD(x , y);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i< n;i++){
            cin>>arr[i];
        }
        long long sum=0;
        sort(arr , arr+n);
        for(int i=0;i<n-2;i++){
            for(int j= i+1;j<n-1;j++){
                sum= sum+GCD(arr[i],arr[j])*(n-1-j);
            }
        }
        cout<<sum<<endl;
    }
}