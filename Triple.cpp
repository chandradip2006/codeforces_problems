#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr , arr+n);
        int count=1;
        bool flag = false;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                if(count>=3){
                    flag = true;
                    cout<<arr[i]<<endl;
                    break;
                }
                else count++;
            }
            else{
                if(count>=3){
                    flag=true;
                    cout<<arr[i]<<endl;
                    break;
                }
                else count=1;
            }
        }
        if(flag==false){
            if(count>=3){
                cout<<arr[n-1]<<endl;
            }
            else cout<<-1<<endl;
        }
    }
}