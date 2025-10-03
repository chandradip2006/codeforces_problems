#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int p =1;
    for(int i = 0 ; i < n ; i++){
        p *= arr[i];
    }
    for(int j =0 ; j < n; j++){
        cout<<p/arr[j]<<" ";
    }

}