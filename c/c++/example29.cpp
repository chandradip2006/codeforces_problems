// sum of even digits
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
        if(i % 2 == 0){
            sum = sum + i;
            n = n / 10;
        }
        else {
            n = n / 10;
        }
    }
    cout<<"the sum of the even digits of the number is: "<<sum;
}