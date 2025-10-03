#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[11];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        bool flag=false;
        for(int i=0;i<count;i++){
            if((ch[i]-'0')%2==0){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<-1<<endl;
        }
        else{
            if((ch[count-1]-'0')%2==0){
                cout<<0<<endl;
            }
            else if((ch[0]-'0')%2==0){
                cout<<1<<endl;
            }
            else cout<<2<<endl;
        }
        t--;
    }
}