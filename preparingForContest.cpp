#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp = *x;
    *x=*y;
    *y = temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=n-i;
        }
        for(int i=0;i<k;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        t--;
    }
}