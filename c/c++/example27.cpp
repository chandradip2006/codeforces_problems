// sum of digits
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int i;
    int sum = 0;
    while(n != 0){
        i = n % 10;
        sum = sum + i;
        n = n / 10;
    }
    cout<<"the sum of the digits of the number is: "<<sum;
}