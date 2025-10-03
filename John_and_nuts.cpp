#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int b[k];
    for(int i=0;i<k;i++){
        cin>>b[i];
    }
    int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+arr[b[i]-1];
    }
    cout<<x-sum+1<<endl;
}