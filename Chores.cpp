#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    cout<<arr[b]-arr[b-1]<<endl;
}