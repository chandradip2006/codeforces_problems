#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        if(i % 2 == 0){
            arr[i]= arr[i] + 10;
        }
        else {
            arr[i] = arr[i] * 2;
        }
    }
    for(int k = 0 ; k < n ; k++){
        cout<<arr[k]<<" ";
    }
}