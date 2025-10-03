#include<iostream>
using namespace std;
int single(int arr[] , int a , int b){
    if(a==b){
        return arr[a];
    }
    else {
        int mid = a+(b-a)/2;
        if(arr[mid]==arr[mid+1]){
            if((b-mid-1)%2!=0){
                return single(arr , mid+2 , b);
            }
            else return single(arr , a , mid-1);
        }
        else if(arr[mid]==arr[mid-1]){
            if((mid-a-1)%2!=0){
                return single(arr , a , mid-2);
            }
            else return single(arr , mid+1 , b);
        }
        else return arr[mid];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<single(arr , 0 , n-1)<<endl;
}