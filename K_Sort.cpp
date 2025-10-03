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
        int count=0;
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=0;
        }
        long long sum=0;
        for(int i=1;i<n;i++){
            cin>>arr[i];
            if(arr[i]<arr[i-1]){
                sum+=(arr[i-1]-arr[i]);
                a[count]=arr[i-1]-arr[i];
                count++;
                arr[i]=arr[i-1];
            }
        }
        int z=a[0];
        for(int i=1;i<count;i++){
            if(a[i]>z){
                z=a[i];
            }
        }

        cout<<sum+z<<endl;
    }
}