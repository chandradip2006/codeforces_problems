#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    string s = to_string(n);
    int l = s.length();
    cout<<"the no of the digits: "<<l;
}