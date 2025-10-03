#include<iostream>
using namespace std;
int factorial(int x){
    if(x == 0){
        return 1;
    }
    else return x*factorial(x-1);
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"the factorial of "<<n<<" is: "<<factorial(n)<<endl;
}