#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of the array: ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(i % 2 == 0){
            sum1 += arr[i];
        }
        else {
            sum2 += arr[i];
        }
    }
    cout<<"the difference is: "<<sum1-sum2;
}