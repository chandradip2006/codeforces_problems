#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"row=";
    cin>>n;
    int m;
    cout<<"col=";
    cin>>m;
    int arr[n][m];

    for(int i= 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>arr[i][j];
        }
    }
    int arr1[n];
    for(int i = 0 ; i < n ; i++){
        int count = 0;
        for(int j = 0 ; j < m ; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        arr1[i] = count;

    }
    int z = arr1[0];
    int idx;
    for(int i = 0 ; i < n ; i++){
        if(z<= arr1[i]){
            z = arr1[i];
            idx = i;
        }
    }
    cout<<idx;
}