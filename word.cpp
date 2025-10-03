#include<iostream>
using namespace std;
int main(){
    char ch[101];
    cin>>ch;
    int count=0;
    while(ch[count]!='\0'){
        count++;
    }
    int count1=0,count2=0;
    for(int i=0;i<count;i++){
        if(ch[i]>='A'&&ch[i]<='Z'){
            count1++;
        }
        else count2++;
    }
    if(count1>count2){
        for(int i=0;i<count;i++){
            if(ch[i]>='a'&&ch[i]<='z'){
                ch[i]=(char)(ch[i]-'a'+'A');
            }
        }
        cout<<ch<<endl;
    }
    else {
        for(int i=0;i<count;i++){
            if(ch[i]>='A'&&ch[i]<='Z'){
                ch[i]=(char)(ch[i]-'A'+'a');
            }
        }
        cout<<ch<<endl;
    }
}