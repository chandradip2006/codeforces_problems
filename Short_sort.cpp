#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[4];
        cin>>ch;
        if((ch[0]=='b'&&ch[1]=='c'&&ch[2]=='a')||(ch[0]=='c'&&ch[1]=='a'&&ch[2]=='b')){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
        t--;
    }
}