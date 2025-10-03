#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter an integer: ";
    cin>>x;
    if(x >= 0) cout<<"the absolute value is: "<<x;
    else cout<<"the absolute value is: "<<x * (-1);
}