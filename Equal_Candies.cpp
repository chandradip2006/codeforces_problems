#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        cin>>arr[0];
        int z=arr[0];
        for(int i=1;i<n;i++){
            cin>>arr[i];
            if(z>arr[i]){
                z=arr[i];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(z!=arr[i]){
                sum=sum+(arr[i]-z);
            }
        }
        cout<<sum<<endl;
    }
}