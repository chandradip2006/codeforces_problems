#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(k>=arr[i]){
                cout<<'1';
                k=k-arr[i];
            }
            else cout<<'0';
        }
        cout<<endl;
        t--;
    }
}