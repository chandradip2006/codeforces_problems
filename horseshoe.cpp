#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    int count=0;
    for(int i=0;i<3;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    cout<<3-count<<endl;
}