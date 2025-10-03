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
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    int count=0;
    if(sum%2==0){
        int z= sum/2;
        while(z>=0){
            z=z-arr[n-1-count];
            count++;
        }
    }
    else{
        int z= sum/2+1;
        while(z>0){
            z=z-arr[n-1-count];
            count++;
        }
    }
    cout<<count<<endl;
}