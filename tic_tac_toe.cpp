#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>ch[i][j];
            }
        }
        bool flag = true;
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                if(ch[i][j]!=ch[i][j+1]){
                    flag=false;
                }
            }
            if(flag){
                if(ch[i][0]=='X'){
                    cout<<"X"<<endl;
                    break;
                }
                else if(ch[i][0]=='+'){
                    cout<<"+"<<endl;
                    break;
                }
                else if(ch[i][0]=='O'){
                    cout<<"O"<<endl;
                    break;
                }
                else{
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
                t--;
                continue;
        }
        else{
            for(int j=0;j<3;j++){
                for(int i=0;i<2;i++){
                    if(ch[i][j]!=ch[i+1][j]){
                        flag=true;
                    }
                }
                if(!flag){
                    if(ch[0][j]=='X'){
                        cout<<"X"<<endl;
                        break;
                    }
                    else if(ch[0][j]=='+'){
                        cout<<"+"<<endl;
                        break;
                    }
                    else if(ch[0][j]=='O'){
                        cout<<"O"<<endl;
                        break;
                    }
                    else{
                        flag=true;
                        break;
                    }
                }
            }
        }
        if(!flag){
            t--;
            continue;
        }
        else {
            if((ch[0][0]==ch[1][1]&&ch[1][1]==ch[2][2])||(ch[2][0]==ch[1][1]&&ch[1][1]==ch[0][2])){
                if(ch[1][1]=='X'){
                    cout<<"X"<<endl;
                }
                else if(ch[1][1]=='+'){
                    cout<<"+"<<endl;
                }
                else if(ch[1][1]=='O'){
                    cout<<"O"<<endl;
                }
                else{
                    flag=false;
                }
            }
        }
        if(flag){
            t--;
            continue;
        }
        else cout<<"DRAW"<<endl;
        t--;
    }
}