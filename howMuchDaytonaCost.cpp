#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
int max(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    int arr1[n],count=0,count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count1++;
        }
        else{
            arr1[count]=count1+1;
            count1=0;
            count++;
        }
    }
    int z= arr1[0];
    for(int i=1;i<count;i++){
        if(arr1[i]>z){
            z=arr1[i];
        }
    }
    return z;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                count++;
            }
        }
        if(count<=max(arr,n)&&count>0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}