#include<iostream>
using namespace std;
int max1(int x , int y){
    if(x>=y){
        return x;
    }
    else return y;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr1[n] , arr2[n];
        cin>>arr1[0];
        int z1=arr1[0];
        for(int i=1;i<n;i++){
            cin>>arr1[i];
            if(arr1[i]<z1){
                z1=arr1[i];
            }
        }
        cin>>arr2[0];
        int z2=arr2[0];
        for(int i=1;i<n;i++){
            cin>>arr2[i];
            if(arr2[i]<z2){
                z2=arr2[i];
            }
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum=sum+max1(arr1[i]-z1,arr2[i]-z2);
        }
        cout<<sum<<endl;
    }
}