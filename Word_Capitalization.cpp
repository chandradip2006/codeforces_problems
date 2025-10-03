#include<iostream>
using namespace std;
int main(){
    char ch[1001];
    cin>>ch;
    if(ch[0]>='A'&&ch[0]<='Z'){
        cout<<ch<<endl;
    }
    else{
        cout<<(char)(ch[0]-'a'+'A')<<ch+1<<endl;
    }
}