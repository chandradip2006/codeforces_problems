#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int sum=0 , count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]!=0){
                if(arr[i]>=k){
                    sum=sum+arr[i];
                }
            }
            else{
                if(sum>0){
                    sum--;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    t--;
    }
}