#include<iostream>
using namespace std;
int main(){
    int arr[6];
    for(int i = 0 ; i < 6 ; i++){
        cin>>arr[i];
    }
    int x ;
    cout<<"enter a number: ";
    cin>>x;
    int count=0;
    for(int i = 0 ; i < 6 ; i++){
        for(int j = i+1 ; i < 6 ; i++){
            for(int k = j+1 ; k < 6 ; k++){
                if(arr[i] + arr[j] + arr[k] == x){
                    count++;
                }
            }
        }
    }
    cout<<"number of triplets: "<<count;
}