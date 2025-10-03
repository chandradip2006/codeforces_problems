#include<iostream>
using namespace std;
int main(){
    char ch1[101],ch2[101];
    cin>>ch1>>ch2;
    int count=0;
    while(ch1[count]!='\0'){
        if(ch1[count]>='A'&&ch1[count]<='Z'){
            ch1[count]=(char)(ch1[count]-'A'+'a');
        }
        if(ch2[count]>='A'&&ch2[count]<='Z'){
            ch2[count]=(char)(ch2[count]-'A'+'a');
        }
        count++;
    }
    int z=0;
    for(int i=0;i<count;i++){
        if(ch1[i]>ch2[i]){
            z=1;
            break;
        }
        else if(ch1[i]<ch2[i]){
            z=-1;
            break;
        }
    }
    cout<<z<<endl;
}