#include<iostream>
using namespace std;
int fibonacci(int x){
    if(x == 1) return 1;
    else if (x == 2) return 1;
    else return fibonacci(x - 1) + fibonacci(x - 2);
}
int main(){
    int n;
    cout<<"enter the term no: ";
    cin>>n;
    cout<<"the term is: "<<fibonacci(n)<<endl;
}