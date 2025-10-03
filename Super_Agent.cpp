#include<iostream>
using namespace std;
int main(){
    char ch[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>ch[i][j];
        }
    }
    bool flag=true;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            if(ch[i][j]!=ch[2-i][2-j]){
                flag =false;
                break;
            }
        }
        if(flag==false){
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}