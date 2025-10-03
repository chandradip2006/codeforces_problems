#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
void swap(int* x, int* y){
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
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum=sum+mod(arr[i]-arr[i+1]);
    }
    cout<<sum<<endl;
}