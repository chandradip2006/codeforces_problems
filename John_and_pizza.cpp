#include<iostream>
#include<math.h>
int max(int a , int b){
    if(a>=b){
        return a;
    }
    else return b;
}
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    float h=sqrt(3)/2;
    
        int b1=2*n-1;
        int z1=m/h;
        int b2=2*m-1;
        int z2=n/h;
        cout<<max(b1*z1,b2*z2)<<endl;
}