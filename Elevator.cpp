#include<iostream>
using namespace std;
int main(){
    char ch[6];
    cin>>ch;
    int a;
    cin>>a;
    if(ch[0]=='f'){
        if(a==1){
            cout<<'L'<<endl;
        }
        else cout<<'R'<<endl;
    }
    else{
        if(a==1){
            cout<<'R'<<endl;
        }
        else cout<<'L'<<endl;
    }
}