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
    int z=arr[0];
    bool flag =true;
    for(int i=1;i<n;i++){
        if(arr[i]%z!=0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<z<<endl;
    }
    else cout<<-1<<endl;
}