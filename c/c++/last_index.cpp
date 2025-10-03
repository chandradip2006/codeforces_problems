#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int arr[10] = {1 , 2 , 2 , 3 , 3 , 3 , 4 , 4 , 4 , 4};
    int z = -1;
    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] == n){
            z = i;
            continue;
        }
        else {
            continue;
        }
    }
    if(z == -1){
        cout<<"number not found";
    }
    else{
        cout<<"the last index of the number is: "<<z;
    }
}