#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"enter the number1: ";
    cin>>a;
    cout<<"enter the number1: ";
    cin>>b;
    cout<<"enter the number1: ";
    cin>>c;
    if(a <= b && a <= c) cout<<"the least number is: "<<a;
    else if (b <= a && b <= c) cout<<"the least number is: "<<b;
    else cout<<"the least number is: "<<c;
}