#include<iostream>
using namespace std;
int main(){
    int n = 3;
    int* p = &n;
    cout<<&n<<endl; // address of variable n
    cout<<p<<endl; //address of variable n
    cout<<n<<endl;  // value inside the variable
    cout<<*p<<endl;  // value inside the variable
    cout<<&p<<endl; // address of pointer p
}