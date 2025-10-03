#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,x;
        cin>>n>>x;
        int arr[n+2];
        for(int i=0;i<n+2;i++){
            if(i==0){
                arr[i]=0;
            }
            else if(i==n+1){
                arr[i]=x;
            }
            else{
                cin>>arr[i];
            }
        }
        int z=arr[1]-arr[0];
        for(int i=1;i<n+1;i++){
            if((arr[i+1]-arr[i])>z){
                z=arr[i+1]-arr[i];
            }
        }
        if(z>2*(arr[n+1]-arr[n])){
            cout<<z<<endl;
        }
        else cout<<2*(arr[n+1]-arr[n])<<endl;
        t--;
    }
}