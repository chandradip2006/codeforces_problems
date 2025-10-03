#include<iostream>
using namespace std;
void swap(long long* x , long long* y){
    long long temp =*x;
    *x=*y;
    *y=temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        long long arr[n];
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
        for(int i=0;i<n;i++){
            arr[i]=arr[i]*(n-i);
        }
        long long z= arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>z){
                z=arr[i];
            }
        }
        cout<<z<<endl;
        t--;
    }
}