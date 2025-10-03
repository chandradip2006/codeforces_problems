#include<iostream>
using namespace std;
int main(){
    int n, count=0,num=1;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    int arr1[n];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i]>arr[i-1]){
            num++;
        }
        else{
            arr1[count]=num;
            count++;
            num=1;
        }
    }
    arr1[count]=num;
    count++;
    int z= arr1[0];
    for(int i=1;i<count;i++){
        if(arr1[i]>z){
            z=arr1[i];
        }
    }
    cout<<z<<endl;
}