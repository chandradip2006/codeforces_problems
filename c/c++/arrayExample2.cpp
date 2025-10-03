#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i = 0 ; i <n ; i++){
        cin>>arr[i];
    }
    int p = 1;
    for(int i = 0 ; i < n ; i++){
        p *= arr[i];
    }
    cout<<"the product of the elements of the array: "<<p;
}