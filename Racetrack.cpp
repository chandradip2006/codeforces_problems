#include<iostream>
using namespace std;
void swap(int* x ,int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int gcd(int x , int y){
    if(x==0){
        return y;
    }
    else{
        int temp = y;
        y=x;
        x=temp%x;
        return gcd(x,y);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        swap(&a,&b);
    }
    cout<<(a*b)/gcd(a,b)<<endl;
}