#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,m;
        cin>>n>>m;
        int z1,z2;
        char ch[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ch[i][j];
            }
        }
        bool flag1=false,flag2=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ch[i][j]=='R'){
                    z1=i;
                    flag1=true;
                    break;
                }
            }
            if(flag1){
                break;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ch[j][i]=='R'){
                    z2=j;
                    flag2=true;
                    break;
                }
            }
            if(flag2){
                break;
            }
        }
        if(z1<z2){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
        t--;
    }
}