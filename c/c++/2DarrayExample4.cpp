#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the matrix:";
    cin>>n;
    int arr[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>arr[i][j];
        }
    }
    int z = arr[0][0];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[i][j] >= z){
                z = arr[i][j];
            }
            else continue;
        }
    }
    cout<<"the maximum element of the matrix is: "<<z;
}