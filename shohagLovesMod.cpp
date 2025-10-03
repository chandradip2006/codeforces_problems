#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n ; i++){
            arr[i]=2*i+1;
        }
        for(int j=0; j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        t--;
    }
}