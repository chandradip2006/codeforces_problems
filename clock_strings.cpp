#include<iostream>
using namespace std;
void swap(int* x , int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int arr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        if(arr[0]>arr[1]){
            swap(&arr[0],&arr[1]);
        }
        if(arr[2]>arr[3]){
            swap(&arr[2],&arr[3]);
        }
        if(!((arr[3]>arr[0]&&arr[3]<arr[1])&&(arr[2]>arr[0]&&arr[2]<arr[1])))
    }
}