#include<iostream>
using namespace std;
int vowel(char ch){
    if(ch!='a'&&ch!='o'&&ch!='y'&&ch!='e'&&ch!='u'&&ch!='i'&&ch!='A'&&ch!='O'&&ch!='Y'&&ch!='E'&&ch!='U'&&ch!='I'){
        return 0;
    }
    else return 1;
}
int main(){
    char ch[101];
    cin>>ch;
    int count=0;
    while(ch[count]!='\0'){
        count++;
    }
    for(int i=0;i<count ;i++){
        if(vowel(ch[i])==0){
            if(ch[i]>='A'&&ch[i]<='Z'){
                cout<<"."<<(char)(ch[i]-'A'+'a');
            }
            else cout<<'.'<<ch[i];
        }
    }
}