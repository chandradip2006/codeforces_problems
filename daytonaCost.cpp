#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        int arr[n] , count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==k){
                count++;
            }
        }
        if(count>0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}