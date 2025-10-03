#include<iostream>
using namespace std; 
void swap(int* x,int* y){
    int temp =*x;
    *x=*y;
    *y =temp;
}
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[2*n];
        for(int i=0; i<2*n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                }
            }
        }
        int min=0 ;
        for(int i=0;i<n-1;i++){
            min=min+mod(arr[i]-arr[i+1])+mod(arr[i+n]-arr[i+1+n]);
            
        }
        cout<<min<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<arr[i+n]<<endl;
        }
        t--;
    }
}