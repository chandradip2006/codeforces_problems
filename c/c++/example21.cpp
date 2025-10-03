#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number of which the table is printed: ";
    cin>>n;
    for(int i = 1 ; i <= 10 ; i++){
        cout<<i<<" : "<<n * i <<endl;
    }
}