#include<iostream>
using namespace std;
void swap(int* x, int* y){
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
    if((arr[0]+arr[3])==(arr[1]+arr[2])){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}