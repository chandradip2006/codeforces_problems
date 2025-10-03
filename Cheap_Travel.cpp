#include<iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a>b){
        if((n%m)*a>b){
            cout<<(n/m)*b+b<<endl;
        }
        else{
           cout<<(n/m)*b+(n%m)*a<<endl; 
        }
    }
    else cout<<n*a<<endl;
}