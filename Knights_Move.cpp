#include<iostream>
using namespace std;
int main(){
    char ch[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>ch[i][j];
        }
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(ch[i][j]=='K'){
                if((i-2)>=0){
                    if((j-1)>=0 && (j-1)<8){
                        if(ch[i-2][j-1]!='K'){
                            ch[i-2][j-1]='*';
                        }
                    }
                    if((j+1)>=0 && (j+1)<8){
                        if(ch[i-2][j+1]!='K'){
                            ch[i-2][j+1]='*';
                        }
                    
                    }
                }
                if((i+2)<8){
                    if((j-1)>=0 && (j-1)<8){
                        if(ch[i+2][j-1]!='K'){
                            ch[i+2][j-1]='*';
                        }
                    }
                    if((j+1)>=0 && (j+1)<8){
                        if(ch[i+2][j+1]!='K'){
                            ch[i+2][j+1]='*';
                        }
                    }
                }
                if((j-2)>=0){
                    if((i-1)>=0&&(i-1)<8){
                        if(ch[i-1][j-2]!='K'){
                            ch[i-1][j-2]='*';
                        }
                    }
                    if((i+1)>=0&&(i+1)<8){
                        if(ch[i+1][j-2]!='K'){
                            ch[i+1][j-2]='*';
                        }
                    }
                }
                if((j+2)<8){
                    if((i-1)>=0&&(i-1)<8){
                        if(ch[i-1][j+2]!='K'){
                            ch[i-1][j+2]='*';
                        }
                    }
                    if((i+1)>=0&&(i+1)<8){
                        if(ch[i+1][j+2]!='K'){
                            ch[i+1][j+2]='*';
                        }
                    }
                }
            }
        }
    }
    cout<<endl;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<ch[i][j];
        }
        cout<<endl;
    }
}
