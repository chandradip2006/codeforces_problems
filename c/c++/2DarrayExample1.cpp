#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of students: ";
    cin>>n;
    int arr[4][2];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}