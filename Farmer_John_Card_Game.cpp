#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        int count=0;
        int a[n];
        int arr[m];
        bool flag = true;
        int count1=1;
        while(count<n){
            for(int i=0;i<m;i++){
                cin>>arr[i];
            }
            sort(arr, arr+m);
            a[count]=arr[0];
            for(int i=0;i<m-1;i++){
                if((arr[i+1]-arr[i])!=n){
                    flag = false;
                    break;
                }
            }
            count++;
        }
        if(flag){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(a[j]==i){
                        cout<<j+1<<" ";
                    }
                }
            }
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
}