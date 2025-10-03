#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a positive integer: ";
    cin>>x;
    (x % 2 == 0) ? cout<<"this is an even number" : cout<<"this is an odd number";
}