#include<iostream>
using namespace std;
int palindrome(char ch[],int count){
    bool flag=false;
    for(int i=1;i<count/2;i++){
        if(ch[i]!=ch[0]){
            flag=true;
            break;
        }
    }
    if(flag){
        return 1;
    }
    else return 0;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[51];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        if(palindrome(ch,count)==1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}