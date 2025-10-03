#include<iostream>
using namespace std;
int main(){
    float x , y;
    cout<<"enter the number1: ";
    cin>>x;
    cout<<"enter the number2: ";
    cin>>y;
    char ch;
    cout<<"enter an operator: ";
    cin>>ch;
    switch(ch){
        case '+':
            cout<<"the sum is: "<<x + y;
            break;
        case '-':
            cout<<"the diffreence is: "<<x - y;
            break;
        case '*':
            cout<<"the product is: "<<x * y;
            break;
        case '/':
            cout<<"the division is: "<<x / y;
            break;
        default:
            cout<<"invalid operator";
            break;
    }

}