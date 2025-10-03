#include<iostream>
using namespace std;
int index(int arr[] , int a, int b, int target){
    if(b<a){
        return a;
    }
    else{
        int mid = (a+b)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            return index(arr,a,mid-1,target);
        }
        else return index(arr,mid+1,b,target);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n] , arr1[n];
    int sum=0;
    for(int i=0 ; i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
        arr1[i]=sum;
    }
    int k;
    cin>>k;
    int arr2[k];
    for(int i=0;i<k;i++){
        cin>>arr2[i];
        cout<<index(arr1,0,n-1,arr2[i])+1<<endl;
    }
}