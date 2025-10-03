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
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(ch[i][0]==ch[i+1][0]){
            flag=false;
            break;
        }
    }
    if(flag){
        for(int i=0;i<n;i++){
            for(int j=0;j<m-1;j++){
                if(ch[i][j]!=ch[i][j+1]){
                    flag=false;
                    break;
                }
            }
            if(flag==false){
                break;
            }
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}