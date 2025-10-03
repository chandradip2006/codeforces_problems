#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        arr[i] = (i+1) * (i+1);
    }
    for(int j = 0 ; j < n ; j++){
        cout<<arr[j]<<" ";
    }
}