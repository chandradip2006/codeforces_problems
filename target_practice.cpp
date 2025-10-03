#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>ch[i][j];
            }
        }
        int sum=0;
        for(int i=0;i<5;i++){
            for(int j=i;j<10-i;j++){
                if(ch[i][j]=='X'&&ch[9-i][j]!='X'){
                    sum=sum+(i+1);
                }
                else if(ch[9-i][j]=='X'&&ch[i][j]!='X'){
                    sum=sum+(i+1);
                }
                else if(ch[9-i][j]=='X'&&ch[i][j]=='X'){
                    sum=sum+2*(i+1);
                }
            }
            for(int j=i+1;j<9-i;j++){
                if(ch[j][i]=='X'&&ch[j][9-i]!='X'){
                    sum=sum+(i+1);
                }
                else if(ch[j][9-i]=='X'&&ch[j][i]!='X'){
                    sum=sum+(i+1);
                }
                else if(ch[j][i]=='X'&&ch[j][9-i]=='X'){
                    sum=sum+2*(i+1);
                }
            }
        }
        cout<<sum<<endl;
        t--;
    }
}