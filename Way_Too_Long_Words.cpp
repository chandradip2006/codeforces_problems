#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[101];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        if(count>10){
            cout<<ch[0]<<count-2<<ch[count-1]<<endl;
        }
        else cout<<ch<<endl;
        t--;
    }
}