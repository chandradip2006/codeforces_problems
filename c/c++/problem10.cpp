#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the order: ";
    cin>>n;
    int arr[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i < n  ; i++){
        for(int j = i ; j < n-i ; j++){
            for(int k = i ; k< n-i ; k++){
                cout<<arr[j][k]<<" ";
            }
            for(int l = i + 1 ; l < n- i ; l++){
                cout<<arr[l][n-i]<<" ";
            }
            for(int m = n- 2-i; m >= i ; m--){
                cout<<arr[n-i][m]<<" ";
            }
            for(int p = n- 2-i; p > i ; p--){
                cout<<arr[p][i];
            }
        }

    }
}