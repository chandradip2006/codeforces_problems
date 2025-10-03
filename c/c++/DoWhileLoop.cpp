#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int i = 1;
    do{        // atleast print once even if the condition is not satisfied
        cout<<i<<endl;
        i++;
    } while(i <= n);
}