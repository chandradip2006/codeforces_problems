#include<iostream>
using namespace std;
int main(){
        int n,m;
        cin>>n>>m;
        char ch[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ch[i][j];
            }
        }
        int z1,z2,z3,z4;
        bool flag1=false,flag2=false,flag3=false,flag4=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ch[i][j]=='*'){
                    z1=i;
                    flag1=true;
                    break;
                }
            }
            if(flag1){
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<m;j++){
                if(ch[i][j]=='*'){
                    z2=i;
                    flag2=true;
                    break;
                }
            }
            if(flag2){
                break;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ch[j][i]=='*'){
                    z3=i;
                    flag3=true;
                    break;
                }
            }
            if(flag3){
                break;
            }
        }
        for(int i=m-1;i>=0;i--){
            for(int j=0;j<n;j++){
                if(ch[j][i]=='*'){
                    z4=i;
                    flag4=true;
                    break;
                }
            }
            if(flag4){
                break;
            }
        }
        for(int i=z1;i<=z2;i++){
            for(int j=z3;j<=z4;j++){
                cout<<ch[i][j];
            }
            cout<<endl;
        }
}