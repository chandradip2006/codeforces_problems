#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[4];
        cin>>ch;
        if(ch[0]>ch[2]){
            ch[1]='>';
        }
        else if(ch[0]<ch[2]){
            ch[1]='<';
        }
        else {
            ch[1]='=';
        }
        for(int i = 0 ; i < 3 ;i++){
            cout<<ch[i];
        }
        cout<<endl;
        t--;
    }
}