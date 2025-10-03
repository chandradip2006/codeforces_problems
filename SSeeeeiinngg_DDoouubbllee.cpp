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
        cout<<ch;
        for(int i=count-1;i>=0;i--){
            cout<<ch[i];
        }
        cout<<endl;
        t--;
    }
}