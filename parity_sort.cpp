#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int check(int arr[], int n,int k){
    int z=arr[k],z1=k;
    for(int i=k;i<n;i++){
        if(arr[i]<z){
            z=arr[i];
            z1=i;
        }
    }
    if((arr[k]%2==0&&z%2!=0)||(arr[k]%2!=0&&z%2==0)){
        return 0;
    }
    else{
        if(k==n){
            return 1;
        }
        else{
            swap(&arr[k],&arr[z1]);
            k++;
            return check(arr,n,k);
        }
    }
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
        if(check(arr,n,0)==1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}
