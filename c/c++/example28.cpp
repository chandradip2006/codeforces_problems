// product of digits
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int i;
    int product = 1;
    while(n != 0){
        i = n % 10;
        product = product * i;
        n = n / 10;
    }
    cout<<"the product of the digits of the number is: "<<product;
}