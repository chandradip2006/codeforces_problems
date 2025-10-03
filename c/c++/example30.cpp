// reversing a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int ld;
    int r = 0;
    while(n != 0){
        ld = n % 10;
        r = r * 10 + ld;
        n = n / 10;
    }
    cout<<"the reverse of the number is: "<<r;
}