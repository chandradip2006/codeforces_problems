#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int z;
    for(int i = n - 1 ; i >= 1 ; i--){
        if(n % i == 0){
            z = i;
            break;
        }
        else continue;
    }
    if(z == 1){
        cout<<"this is a prime number";
    }
    else{
        cout<<"this is not a prime number";
    }
}