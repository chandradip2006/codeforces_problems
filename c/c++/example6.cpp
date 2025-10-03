#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a positive integer: ";
    cin>>x;
    if(x % 5 == 0) cout<<"the number is divisible by 5";
    else cout<<"the number is not divisible by 5";
}