#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],arr1[n];
    int count=0,count1=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            count1++;
        }
        else{
            arr1[count]=count1+1;
            count1=0;
            count++;
        }
    }
    arr1[count]=count1+1;
    count++;
    int z=arr1[0];
    for(int i=1;i<count;i++){
        if(arr1[i]>z){
            z=arr1[i];
        }
    }
    cout<<z<<endl;
}