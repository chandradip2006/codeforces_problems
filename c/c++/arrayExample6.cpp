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
    int x;
    cout<<"enter a number: ";
    cin>>x;
    int count =0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > x){
            count++;
        }
        else continue;
    }
    cout<<"the no of elements of the array greater than "<<x<<" is : "<<count;
}