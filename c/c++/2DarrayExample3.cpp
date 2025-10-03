#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the square matrix: ";
    cin>>n;
    int arr1[n][n] ,arr2[n][n] , arr3[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n; j++){
            cin>>arr1[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n; j++){
            cin>>arr2[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

}