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
        int count=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
            else break;
        }
        if(count+1==n){
            cout<<-1<<endl;
        }
        else{
            cout<<count+1<<" "<<n-count-1<<endl;
            for(int i=0;i<=count;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            for(int i=count+1;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        t--;
    }
}