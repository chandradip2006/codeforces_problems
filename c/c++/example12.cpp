#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"enter the positive integer1: ";
    cin>>a;
    cout<<"enter the positive integer2: ";
    cin>>b;
    cout<<"enter the positive integer3: ";
    cin>>c;
    if(a >= b && a >= c) cout<<"the greatest number is: "<<a;
    else if (b >= a && b >= c) cout<<"the greatest number is: "<<b;
    else cout<<"the greatest number is: "<<c;
}