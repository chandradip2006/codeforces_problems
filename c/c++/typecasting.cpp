#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter an integer: ";
    cin>>x;
    float y = (float) x;   // typecasting
    cout<<"the half of the integer: "<<y / 2;
}