#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n - 1 ; j++){
            if(arr[j]==0 && arr[j+1] != 0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else continue;
        }
    }
    for(int k = 0 ; k < n ; k++){
        cout<<arr[k]<<" ";
    }
}