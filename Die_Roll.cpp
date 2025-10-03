#include<iostream>
using namespace std;
int max(int x,int y){
    if(x>=y){
        return x;
    }
    else return y;
}
int GCD(int x,int y){
    if(x==0){
        return y;
    }
    else{
        int temp=y;
        y=x;
        x=temp%x;
        return GCD(x,y);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int z=6-max(a,b)+1;
    int gcd=GCD(z,6);
    cout<<z/gcd<<'/'<<6/gcd<<endl;
}