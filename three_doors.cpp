#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        if(arr[n-1]==0){
            cout<<"NO"<<endl;
        }
        else{
            if(arr[arr[n-1]-1]==0){
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
        t--;
    }
}