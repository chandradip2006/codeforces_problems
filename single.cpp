#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr , arr+n);
    int count=1;
    int s;
    bool flag=false;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            if(count==1){
                s=arr[i];
                flag=true;
                break;
            }
        }
    }
    if(!flag){
        s=arr[n-1];
    }
    // int s=arr[0];
    // for(int i=1;i<n;i++){
    //     s=s^arr[i];
    // }
    cout<<s<<endl;
}