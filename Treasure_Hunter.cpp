#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a , r1 , r2;
    cin>>a>>r1>>r2;
    int x=(r1*r1+a*a-r2*r2)/(2*a);
    int y=(-1)*sqrt(r1*r1-x*x);
    cout<<x<<endl;
    cout<<y<<endl;
}