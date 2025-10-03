#include<iostream>
#include<cmath>  // required for the function of the library operators
using namespace std;
int main(){
    int n, m;
    cin>>n;
    cin>> m;
    float z1 = sqrt(n);  // library function
    float z2 = cbrt(n);
    int z3 = max(n , m);
    int z4 = pow(n , m);
    cout<<z1<<endl;
    cout<<z2<<endl;;
    cout<<z3<<endl;
    cout<<z4<<endl;

}