#include<iostream>
using namespace std;
int main(){
    char ch[51];
    cin>>ch;
    int count=0;
    while(ch[count]!='\0'){
        count++;
    }
    int num=0;
    for(int i=0;i<count;i++){
        if(ch[i]=='a'){
            num++;
        }
    }
    if(num>(count/2)){
        cout<<count<<endl;
    }
    else cout<<2*num-1<<endl;
}