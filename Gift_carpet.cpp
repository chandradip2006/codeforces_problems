#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,m;
        cin>>n>>m;
        char ch[n][m];
        for(int i=0;i<n;i++){
            for(int j=0; j<m;j++){
                cin>>ch[i][j];
            }
        }
        int z;
        bool flag1=false,flag2=false,flag3=false,flag4=false;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(ch[i][j]=='v'){
                    z=j;
                    flag1=true;
                    break;
                }
            }
            if(flag1){
                break;
            }
        }
        for(int j=z+1;j<m;j++){
            for(int i=0;i<n;i++){
                if(ch[i][j]=='i'){
                    z=j;
                    flag2=true;
                    break;
                }
            }
            if(flag2){
                break;
            }
        }
        for(int j=z+1;j<m;j++){
            for(int i=0;i<n;i++){
                if(ch[i][j]=='k'){
                    z=j;
                    flag3=true;
                    break;
                }
            }
            if(flag3){
                break;
            }
        }
        for(int j=z+1;j<m;j++){
            for(int i=0;i<n;i++){
                if(ch[i][j]=='a'){
                    flag4=true;
                    break;
                }
            }
            if(flag4){
                break;
            }
        }
        if(flag1&&flag2&&flag3&&flag4){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}