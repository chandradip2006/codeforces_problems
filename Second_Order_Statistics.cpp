#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp=*x;
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
    bool flag=false;
    int z;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            z=arr[i+1];
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<z<<endl;
    }
    else cout<<"NO"<<endl;
}