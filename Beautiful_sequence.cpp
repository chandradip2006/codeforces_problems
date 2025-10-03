#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        bool flag =false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<=i+1){
                flag=true;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}