#include<iostream>
using namespace std;
int pow(int x , int y){
    if(y == 1){
        return x;
    }
    else return x*pow(x , y-1);
}
int main(){
    int a;
    cout<<"enter the base: ";
    cin>>a;
    int b;
    cout<<"enter the power: ";
    cin>>b;
    cout<<a<<" to the power "<<b<<" is: "<<pow(a , b)<<endl;


}