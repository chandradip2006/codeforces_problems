#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d[n];
    for(int i=0;i<n-1;i++){
        d[i]=mod(arr[i+1]-arr[i]);
    }
    d[n-1]=mod(arr[n-1]-arr[0]);
    int z=d[0] , idx;
    for(int i=0;i<n;i++){
        if(d[i]<=z){
            z=d[i];
            idx=i;
        }
    }
    if(idx==n-1){
        cout<<n<<" "<<1<<endl;
    }
    else cout<<idx+1<<" "<<idx+2<<endl;
}