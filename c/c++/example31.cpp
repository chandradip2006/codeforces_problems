#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int z = n;
    int ld;
    int r = 0 ;
    while ( z != 0){
        ld = z % 10;
        r = r * 10 + ld;
        z = z / 10;
    }
    int sum = n + r;
    cout<<"the sum of the number and its reverse is: "<<sum;
}