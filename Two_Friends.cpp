#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];\
        int z=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[arr[i]-1]==i+1){
                z=1;
                break;
            }
        }
        if(z==1){
            cout<<2<<endl;
        }
        else cout<<"3"<<endl;
    }
}