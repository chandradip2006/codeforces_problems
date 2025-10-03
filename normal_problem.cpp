#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        char ch[100];
        cin>>ch;
        int count = 0;
        while(ch[count]!='\0'){
            count++;
        }
        for(int i = count -1 ; i>=0;i--){
            if(ch[i]=='p'){
                ch[i]='q';
            }
            else if(ch[i]=='q'){
                ch[i]='p';
            }
        }
        for(int i = count-1;i>=0;i--){
            cout<<ch[i];
        }
        cout<<endl;
        n--;
    }
}