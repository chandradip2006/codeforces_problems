#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int a,b,c;
        cin>>a>>b>>c;
        if(mod(a-b)%2==0){
            if((mod(a-b)/2)%c==0){
                cout<<(mod(a-b)/2)/c<<endl;
            }
            else{
                cout<<(mod(a-b)/2)/c+1<<endl;
            }
        }
        else{
            cout<<(mod(a-b)/2)/c+1<<endl;
        }
        t--;
    }
}