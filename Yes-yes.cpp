#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[4];
        cin>>ch;
        if(ch[0]=='Y'||ch[0]=='y'){
            if(ch[1]=='E'||ch[1]=='e'){
                if(ch[2]=='S'||ch[2]=='s'){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}