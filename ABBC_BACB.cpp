#include<iostream>
using namespace std;
int max(int x , int y){
    if(x>=y){
        return x;
    }
    else return y;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[200001],ch1[200001];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            ch1[count]=ch[count];
            count++;
        }
        int coin1=0;
        for(int j=0;j<count-1;j++){
            if(ch[j]=='B'&&ch[j+1]=='A'){
                coin1++;
                ch[j]='C';
                ch[j+1]='B';
            }
        }
        for(int j=count-1;j>0;j--){
            if(ch[j]=='B'&&ch[j-1]=='A'){
                coin1++;
                ch[j]='C';
                ch[j-1]='B';
            }
        }
        int coin2=0;
        for(int j=count-1;j>0;j--){
            if(ch1[j]=='B'&&ch1[j-1]=='A'){
                coin2++;
                ch1[j]='C';
                ch1[j-1]='B';
            }
        }
        for(int j=count-1;j>0;j--){
            if(ch1[j]=='B'&&ch1[j-1]=='A'){
                coin2++;
                ch1[j]='C';
                ch1[j-1]='B';
            }
        }
        cout<<max(coin1,coin2)<<endl;
        t--;
    }
}