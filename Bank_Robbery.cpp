#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    int n , count=0 ;
    cin>>a>>b>>c>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>b&&arr[i]<c){
            count++;
        }
    }
    cout<<count<<endl;
}