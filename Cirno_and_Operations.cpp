#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        int i=0,j=n-1;
        int z=0;
        while(i<j){
            if(n==1){
                z=arr[0];
                break;
            }
            else if(n==2){
                z=abs(arr[0]-arr[1]);
            }
            z=z+abs(arr[i]-arr[j]);
            if(z>sum){
                sum=z;
            }
            i++;
            j--;
        }
    }
}