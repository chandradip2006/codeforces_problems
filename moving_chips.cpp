#include<iostream>
using namespace std;
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
        int z1,z2;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                z1=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[n-1-i]==1){
                z2=n-1-i;
                break;
            }
        }
        int count=0;
        for(int i=z1;i<=z2;i++){
            if(arr[i]==0){
                count++;
            }
        }
        cout<<count<<endl;
        t--;
    }
}