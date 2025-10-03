#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    sort(arr , arr+n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((arr[j]-arr[i])<=d){
                // if(arr[i]!=arr[j]){
                //     count=count+2;
                // }
                // else count++;
                count=count+2;
            }
        }
    }
    cout<<count<<endl;
}