#include<iostream>
using namespace std;
int min(int x , int y){
    if(x>=y){
        return y;
    }
    else return x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        cin>>arr[0];
        for(int i=1;i<n;i++){
            cin>>arr[i];
            int z= min(arr[i-1], arr[i]);
            arr[i]=arr[i]-z;
            arr[i-1]=arr[i-1]-z;
        }
        bool flag = true;
        for(int i=0;i< n-1;i++){
            if(arr[i]>arr[i+1]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}