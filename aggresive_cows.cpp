#include<bits/stdc++.h>
using namespace std;
bool check(int arr[] , int d , int c , int size){
    int ans = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]-ans>=d){
            ans = arr[i];
            c--;
        }
        if(c==1){
            return true;
        }
    }
    return false;
}
int diff(int arr[],int a , int b , int c , int size){
    if(a>b){
        return b;
    }
    else {
        int mid=a+(b-a)/2;
        if(check(arr,mid , c, size)){
            return diff(arr,mid+1,b,c,size);
        }
        else {
            return diff(arr , a , mid-1,c,size);
        }
    }
}
int main(){
    int n;
    cout<<"no of rooms: ";
    cin>>n;
    int arr[n];
    cout<<"locations of rooms: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c;
    cout<<"no. of cows: ";
    cin>>c;
    sort(arr,arr+n);
    cout<<"the largest minimum distance: "<<diff(arr,1,arr[n-1]-arr[0],c , n);
}