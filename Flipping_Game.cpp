#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count2=0;
    int arr1[n+2];
    int count=1;
    arr1[0]=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            count2++;
            arr1[count]=i;
            count++;
        }
    }
    arr1[count]=n;
    count++;
    int z= arr1[1]-arr1[0]-1;
    for(int i=1;i<count-1;i++){
        if((arr1[i+1]-arr1[i]-1)>z){
            z=arr1[i+1]-arr1[i]-1;
        }
    }
    cout<<count2+z<<endl;
}