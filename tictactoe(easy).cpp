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
        if((ch[0][0]==ch[0][1]&&ch[0][1]==ch[0][2])||(ch[1][0]==ch[1][1]&&ch[1][1]==ch[1][2])||(ch[2][0]==ch[2][1]&&ch[2][1]==ch[2][2])||(ch[0][0]==ch[1][0]&&ch[1][0]==ch[2][0])||(ch[0][1]==ch[1][1]&&ch[1][1]==ch[2][1])||(ch[0][2]==ch[1][2]&&ch[1][2]==ch[2][2])||(ch[0][0]==ch[1][1]&&ch[1][1]==ch[2][2])||(ch[2][0]==ch[1][1]&&ch[1][1]==ch[0][2])){
            if(ch[0][0]==ch[0][1]&&ch[0][1]==ch[0][2]){
                if(ch[0][0]=='X'){
                    cout<<"X"<<endl;
                }
                else if(ch[0][0]=='+'){
                    cout<<"+"<<endl;
                }
                else if(ch[0][0]=='O'){
                    cout<<"O"<<endl;
                }
                else{
                    if(ch[1][0]==ch[1][1]&&ch[1][1]==ch[1][2]){
                        if(ch[1][0]=='X'){
                            cout<<"X"<<endl;
                        }
                        else if(ch[1][0]=='+'){
                            cout<<"+"<<endl;
                        }
                        else if(ch[1][0]=='O'){
                            cout<<"O"<<endl;
                        }
                        else{
                            if(ch[2][0]==ch[2][1]&&ch[2][1]==ch[2][2]){
                                if(ch[2][0]=='X'){
                                    cout<<"X"<<endl;
                                }
                                else if(ch[2][0]=='+'){
                                    cout<<"+"<<endl;
                                }
                                else if(ch[2][0]=='O'){
                                    cout<<"O"<<endl;
                                }
                                else{
                                    cout<<"DRAW"<<endl;
                                }
                            }
                        }
                    }
                }
            }
            else if(ch[0][0]==ch[1][0]&&ch[1][0]==ch[2][0]){
                if(ch[0][0]=='X'){
                    cout<<"X"<<endl;
                }
                else if(ch[0][0]=='+'){
                    cout<<"+"<<endl;
                }
                else if(ch[0][0]=='O'){
                    cout<<"O"<<endl;
                }
                else{
                    if(ch[0][1]==ch[1][1]&&ch[1][1]==ch[2][1]){
                        if(ch[0][1]=='X'){
                            cout<<"X"<<endl;
                        }
                        else if(ch[0][1]=='+'){
                            cout<<"+"<<endl;
                        }
                        else if(ch[0][1]=='O'){
                            cout<<"O"<<endl;
                        }
                        else{
                            if(ch[0][2]==ch[1][2]&&ch[1][2]==ch[2][2]){
                                if(ch[0][2]=='X'){
                                    cout<<"X"<<endl;
                                }
                                else if(ch[0][2]=='+'){
                                    cout<<"+"<<endl;
                                }
                                else if(ch[0][2]=='O'){
                                    cout<<"O"<<endl;
                                }
                                else{
                                    cout<<"DRAW"<<endl;
                                }
                            }
                        }
                    }
                }
            }
            else if((ch[0][0]==ch[1][1]&&ch[1][1]==ch[2][2])||(ch[2][0]==ch[1][1]&&ch[1][1]==ch[0][2])){
                if(ch[0][0]=='X'){
                    cout<<"X"<<endl;
                }
                else if(ch[0][0]=='+'){
                    cout<<"+"<<endl;
                }
                else if(ch[0][0]=='O'){
                    cout<<"O"<<endl;
                }
                else{
                    cout<<"DRAW"<<endl;
                }
            }
        }
        else{
            cout<<"DRAW"<<endl;
        }
        t--;
    }
}