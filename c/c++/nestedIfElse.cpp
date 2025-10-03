#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"enter the number1: ";
    cin>>a;
    cout<<"enter the number2: ";
    cin>>b;
    cout<<"enter the number3: ";
    cin>>c;
    if(a >= b){
        if(a >= c) cout<<"the greatest number is: "<<a;
        else cout<<"the greatest number is: "<<c;
    }
    else {
        if(b >= c) cout<<"the greatest number is: "<<b;
        else cout<<"the greatest number is: "<<c;
    }

}