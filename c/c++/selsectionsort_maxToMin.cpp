#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n-1 ; i++){
        int max_index = i;
        for(int j = i ; j < n ; j++){
            if(arr[j]> arr[max_index]){
                max_index = j;
            }
            else continue;
        }
        int temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index ]= temp;
    }
    for(int k = 0 ; k < n ; k++){
        cout<<arr[k]<<" ";
    }
}