#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a natural number: ";
    cin>>n;
    int r;
    if(n == 1) cout<<"neither prime nor composite";
    else {
        for (int i = n-1 ; i >= 1 ; i--){
            if(n % i == 0){
                r = i;
                break;
            }
            else continue;
        }
        if(r == 1) cout<<"the number is a prime number";
        else cout<<"the number is a composite number";
    }
}