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
            for(int j=0;j<m;j++){
                cin>>ch[i][j];
            }
        }
        bool flag1=false,flag2=false;
        int z1,z2;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ch[i][j]=='#'){
                    flag1=true;
                    z1=j;
                    break;
                }
            }
            if(flag1){
                break;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ch[j][i]=='#'){
                    z2=j;
                    flag2=true;
                    break;
                }
            }
            if(flag2){
                break;
            }
        }
        cout<<z2+1<<" "<<z1+1<<endl;
        t--;
    }
}