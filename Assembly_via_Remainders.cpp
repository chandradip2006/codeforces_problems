#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n-1];
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        int arr1[n];
        arr1[0]=arr[0]+1;
        for(int i=1;i<n-1;i++){
            int z=arr[i]/arr1[i-1];
            arr1[i]=(z+1)*arr1[i-1]+arr[i-1];
        }
        arr1[n-1]=arr[n-2]+arr1[n-2];
        for(int i=0;i<n;i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    }
}