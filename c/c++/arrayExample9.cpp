#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of the array: ";
    cin>> n;
    int arr1[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr1[i];
    }
    int arr2[n];
    for(int i = 0 ; i < n ; i++){
        arr2[i] = arr1[n-i - 1];
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr2[i]<<" ";
    }
}