#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[3];
        cin>>ch;
        for(int i=0;i<8;i++){
            if((int)ch[0]!=97+i){
                cout<<(char)(97+i)<<ch[1]<<endl;
            }
        }
        for(int i=0;i<8;i++){
            if((int)ch[1]!=49+i){
                cout<<ch[0]<<i+1<<endl;
            }
        }
        t--;
    }
}