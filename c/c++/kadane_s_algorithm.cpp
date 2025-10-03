#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        max_sum=max(sum,max_sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<max_sum<<endl;
}