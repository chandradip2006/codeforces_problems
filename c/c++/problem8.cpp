#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the order of the square matrix: ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int arr1 [n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr1[i][j] = arr[n-1-j][i];
        }
    }
    cout<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}