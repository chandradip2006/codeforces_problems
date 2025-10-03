#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>ch[i][j];
            }
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(ch[i][j]!='.'){
                    cout<<ch[i][j];
                    break;
                }
            }
        }
        cout<<endl;
        t--;
    }
}