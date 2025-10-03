#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[4];
        cin>>ch;
        cout<<(ch[0]-'0')+(ch[2]-'0')<<endl;
        t--;
    }
}