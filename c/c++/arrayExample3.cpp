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
    int z = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] >= z){
            z = arr[i];
        }
        else continue;
    }
    cout<<"the largest element of the array is: "<<z;
}