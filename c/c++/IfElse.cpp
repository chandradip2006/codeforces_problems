#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a positive integer: ";
    cin>>x;
    if(x % 2 == 0) cout<<"this is an even number";
    else cout<<"this is an odd number";
}