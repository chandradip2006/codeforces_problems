#include<iostream>
using namespace std;
int main(){
    float cp , sp;
    cout<<"enter the cost price:";
    cin>>cp;
    cout<<"enter the selling price:";
    cin>>sp;
    if(cp > sp) cout<<"loss: "<<cp - sp;
    else if (sp > cp) cout<<"profit: "<<sp - cp;
    else cout<<"no profit , no loss";
}