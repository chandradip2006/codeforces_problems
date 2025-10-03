#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int a , b;
        cin>>a>>b;
        if(a>=b){
            cout<<a<<endl;
            t--;
            continue;
        }
        else{
            int x = b-a;
            if(x>=a){
                cout<<0<<endl;
                t--;
                continue;
            }
            else{
                cout<<a-x<<endl;
            }
        }
        t--;
    }
}