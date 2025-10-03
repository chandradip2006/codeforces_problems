#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    // for(int i = 0 ; i < n-1; i++){
    //     int min = arr[i];
    //     for(int j = i ; j < n ; j++){
    //         if(arr[j] <= min){
    //             min = arr[j];
    //         }
    //         else continue;
    //     }
    //     int z;
    //     for(int i = 0 ; i < n ; i++){
    //         if(arr[i] == min){
    //             z = i;
    //             break;
    //         }
    //         else continue;
    //     }
    for(int i =0 ; i < n-1 ; i++){
        int min_index = i;
        for(int j = i ; j < n ; j++){
            if(arr[j] <= arr[min_index]){
                min_index = j;
            }
            else continue;
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    for(int k = 0 ; k<n; k++){
        cout<<arr[k]<<" ";
    }
}