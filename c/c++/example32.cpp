// factorial of a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int z = 1;
    for(int i = 1 ; i <= n ; i++){
        z = z * i;
    }
    cout<<"the factorial of "<<n<<" is: "<<z;
}