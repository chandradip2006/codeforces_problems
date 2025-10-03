#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the matrix: ";
    cin>>n;
    int arr[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>arr[i][j];
        }
    }
    int p = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ;j++){
            p *= arr[i][j];
        }
    }
    cout<<"the product of the elements of the matrix: "<<p;
}