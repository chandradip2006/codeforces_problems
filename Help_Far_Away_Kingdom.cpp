#include<iostream>
using namespace std;
int main(){
    char ch[1001];
    cin>>ch;
    int count=0;
    while(ch[count]!='\0'){
        count++;
    }
    int z;
    for(int i=0;i<count;i++){
        if(ch[i]=='.'){
            z=i;
            break;
        }
    }
    if(ch[z+1]>='5'){
        if(ch[z-1]=='9'){
            cout<<"GOTO Vasilisa."<<endl;
        }
        else {
            for(int i=0;i<z-1;i++){
                cout<<ch[i];
            }
            cout<<(char)(ch[z-1]+1)<<endl;
        }
    }
    else{
        if(ch[z-1]=='9'){
            cout<<"GOTO Vasilisa."<<endl;
        }
        else{
            for(int i=0;i<z;i++){
                cout<<ch[i];
            }
            cout<<endl;
        }
    }
}