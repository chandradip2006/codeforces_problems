#include<iostream>
using namespace std;
int min(int a, int b){
    if(a>=b){
        return b;
    }
    else return a;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int b,c,h;
        cin>>b>>c>>h;
        int layer = 1+2*min(b-1,c+h);
        cout<<layer<<endl;
        t--;
    }
}