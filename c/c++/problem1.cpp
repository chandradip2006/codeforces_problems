#include<iostream>
using namespace std;
int main(){
    int arr[6];
    for(int i = 0 ; i < 6 ; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter a number: ";
    cin>>x;
    int count = 0;
    for(int i = 0 ; i < 6 ; i++){
        for(int j = i+1 ; j < 6 ; j++){
            if(arr[i] + arr[j] == x){
                count++;
            }
        }
    }
    cout<<"the no of pairs: "<<count;
}