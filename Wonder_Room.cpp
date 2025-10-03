#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n , a , b;
    cin>>n>>a>>b;
    long long int z = 6*n;
    if(a*b>=z){
        cout<<a*b<<endl;
        cout<<a<<" "<<b<<endl; 
    }
    else{
        if(a>=b){
            long long int rd= z%b;
            if(rd==0){
                cout<<z<<endl;
                cout<<z/b<<" "<<b<<endl;
            }
            else{
                cout<<z+rd<<endl;
                cout<<(z+rd)/b<<" "<<b<<endl;
            }
        }
        else{
            long long int rd= z%a;
            if(rd==0){
                cout<<z<<endl;
                cout<<a<<" "<<z/a<<endl;
            }
            else{
                cout<<z+rd<<endl;
                cout<<a<<" "<<(z+rd)/a<<endl;
            }
        }
    }
}