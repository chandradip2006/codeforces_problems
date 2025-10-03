#include<iostream>
using namespace std;
int main(){
    int n , x=0;
    cin>>n;
    while(n>0){
        char a , b, c;
        cin>>a>>b>>c;
        if(a=='+'||c=='+'){
            x=x+1;
        }
        else{
            x=x-1;
        }
        n--;
    }
    cout<<x<<endl;
}