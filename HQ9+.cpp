#include<iostream>
using namespace std;
int main(){
    char ch[101];
    cin>>ch;
    int count=0;
    while(ch[count]!='\0'){
        count++;
    }
    bool flag=false;
    for(int i=0;i<count;i++){
        if(ch[i]=='H'||ch[i]=='Q'||ch[i]=='9'||ch[i]=='+'){
            cout<<"YES"<<endl;
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout<<"NO"<<endl;
    }
}