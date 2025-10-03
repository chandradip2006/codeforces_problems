#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of the array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    bool flag = false;
    for(int i = 0 ; i < n/2 ; i++){
        if(arr[i] == arr[n - i - 1]){
            flag = true;
        }
        else {
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout<<"palindrome";
    }
    else {
        cout<<"not palindrome";
    }
}