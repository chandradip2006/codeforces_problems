#include<iostream>
using namespace std;
int main(){
    int arr[5][4];
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j <  4 ; j++){
            cin>>arr[i][j];
        }
    }
    int l1,r1,l2,r2;
    cout<<"l1: ";
    cin>>l1;
    cout<<"r1: ";
    cin>>r1;
    cout<<"l2: ";
    cin>>l2;
    cout<<"r2: ";
    cin>>r2;
    int sum = 0;
    for(int i = l1 ; i <= l2 ; i++){
        for(int j = r1 ; j <= r2 ; j++){
            sum += arr[i][j];
        }
    }
    cout<<"the sum is: "<<sum;
}