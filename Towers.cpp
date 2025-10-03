#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    int arr1[n] , count=1, count1=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            arr1[count1]=count;
            count1++;
            count=1;
        }
    }
    arr1[count1]=count;
    count1++;
    int z = arr1[0];
    for(int i=1;i< count1;i++){
        if(arr1[i]>z){
            z=arr1[i];
        }
    }
    cout<<z<<" "<<count1<<endl;
}