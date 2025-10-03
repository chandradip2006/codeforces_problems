#include<iostream>
using namespace std;
int main(){
    int l1,l2,l3;
    cout<<"enter the length of side1: ";
    cin>>l1;
    cout<<"enter the length of side2: ";
    cin>>l2;
    cout<<"enter the length of side3: ";
    cin>>l3;
    if(l1 + l2 > l3 && l3 + l2 > l1 && l1 + l3 > l2) cout<<"the sides form a triangle";
    else cout<<"the sides donot form a triangle";
}