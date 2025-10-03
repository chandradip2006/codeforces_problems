#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                }
            }
        }
        if(arr[1]+arr[2]>=10){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}