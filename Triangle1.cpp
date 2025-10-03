#include<iostream>
using namespace std;
void swap(int* x , int* y){
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
    if((arr[0]+arr[1])>arr[2]){
        cout<<"TRIANGLE"<<endl;
    }
    else{
        if((arr[1]+arr[2])>arr[3]){
            cout<<"TRIANGLE"<<endl;
        }
        else{
            if((arr[0]+arr[1])==arr[2]){
                cout<<"SEGMENT"<<endl;
            }
            else{
                if((arr[1]+arr[2])==arr[3]){
                    cout<<"SEGMENT"<<endl;
                }
                else cout<<"IMPOSSIBLE"<<endl;
            }
        }
    }
}