#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n , count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                count++;
            }
        }
        if(count==n){
            cout<<-1<<endl;
        }
        else cout<<count<<endl;
        t--;
    }
}