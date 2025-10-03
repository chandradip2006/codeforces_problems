#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1 , a2 , a4 , a5;
        cin>>a1>>a2>>a4>>a5;
        int a3 = a1 + a2;
        if(a2+a3==a4){
            if(a3+a4==a5){
                cout<<3<<endl;
            }
            else cout<<2<<endl;
        }
        else if(a3+a4==a5){
            cout<<2<<endl;
        }
        else {
            a3=a4-a2;
            if(a3+a4==a5){
                cout<<2<<endl;
            }
            else cout<<1<<endl;
        }
    }
}