#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char ch[6];
        cin>>ch;
        int count=0 , count1=0;
        while(ch[count]!='\0'){
            if(ch[count]=='?'){
                count1++;
            }
            count++;
        }
        if(ch[0]=='?'){
            cout<<9*pow(10,count1-1)<<endl;
        }
        else if(ch[0]=='0'){
            cout<<0<<endl;
        }
        else cout<<pow(10,count1)<<endl;
    }
}