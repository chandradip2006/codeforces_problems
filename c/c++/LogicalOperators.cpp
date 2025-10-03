#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a positive integer: ";
    cin>>n;
    if(n >= 100 && n <= 999) cout<<"this is a three digit number";
    else cout<<"this is not a three digit number";
}