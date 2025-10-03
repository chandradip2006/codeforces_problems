#include<iostream>
using namespace std;
int main(){
    int m , n;
    cin>>m>>n;
    int z=0;
    if(m>=n){
        z=(m/2)*n+(m%2)*(n/2);
    }
    else {
        z=(n/2)*m+(n%2)*(m/2);
    }
    cout<<z<<endl;
}