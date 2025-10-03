#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of the array: ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int z = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > z){
            z = arr[i];
        }
        else continue;
    }
    int r;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] ==z){
            r = i;
        }
        else continue;
    }
    int temp = arr[r];
    arr[r] = arr[0];
    arr[0] = temp;
    int x = arr[1];
    for(int i = 1 ; i < n ; i++){
        if(arr[i]> x){
            x = arr[i];
        }
        else continue;
    }
    cout<<"the second largest element of the array: "<<x;
}