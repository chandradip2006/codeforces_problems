#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter the no of elements: ";
    // cin>>n;
    // int arr[n];
    // for(int i = 0 ; i < n ; i++){
    //     cin>>arr[i];
    // }
    // for(int j =0 ; j < n-1 ; j++){
    //     for(int k = 0 ; k < n- j -1 ; k++){
    //         if(arr[k] >= arr[k+1]){
    //             int temp = arr[k];
    //             arr[k] = arr[k+1];
    //             arr[k+1]= temp;
    //         }
    //         else continue;
    //     }
    // }
    // cout<<"the second highest element is: "<<arr[n-2];

    int n;
    cout<<"enter the no of elements: ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int z1 = arr[0] , z2 = arr[0];
    int z3 = -1;
    for(int i = 1 ; i < n ; i++){
        if(z1<=arr[i]){
            z2 = z1;
            z1 = arr[i];
            z3 = 1;
        }
    }
    if(z3 == -1){
        int z2 = arr[1];
        for(int i =1 ; i < n ; i++){
            if(z2 <= arr[i]){
                z2 = arr[i];
            }
        }
    }
    cout<<"the second highest element is: "<<z2;
}