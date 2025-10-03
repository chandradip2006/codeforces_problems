#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"enter the age of ram: ";
    cin>>a;
    cout<<"enter the age of shyam: ";
    cin>>b;
    cout<<"enter the age of ajay: ";
    cin>>c;
    if(a < b){
        if(a < c) cout<<"the youngest of the three is ram";
        else cout<<"the youngest of the three is ajay";
    }
    else {
        if(b < c) cout<<"the youngest of the three is shyam";
        else cout<<"the youngest of the three is ajay";
    }
}