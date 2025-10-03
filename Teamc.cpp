#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        int count=0;
        int count1=0;
        int arr1[n];
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>=k){
                count++;
            }
            else{
                arr1[count1]=arr[i];
                count1++;
            }
        }
        for(int i=0;i<count1-1;i++){
            if(arr1[i]+arr1[i+1]>=k){
                count++;
                i++;
            }
        }
        cout<<count<<endl;
        t--;
    }
}