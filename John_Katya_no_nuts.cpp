#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int a,b;
    cin>>a>>b;
    if(mod(a-b)>=a){
        if(a<=b){
            cout<<b+1<<endl;
        }
        else{
            cout<<a+mod(a-b)+1<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }
}