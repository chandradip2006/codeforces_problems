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
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    cout<<"the sum of the elements of the array is: "<<sum;
}