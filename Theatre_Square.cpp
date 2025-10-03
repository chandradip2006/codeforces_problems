#include<iostream>
using namespace std;
int main(){
    int n , m , a;
    cin>>n>>m>>a;
    long long int z1=(n/a)+!(!(n%a));
    long long int z2=(m/a)+!(!(m%a));
    cout<<z1*z2<<endl;
}