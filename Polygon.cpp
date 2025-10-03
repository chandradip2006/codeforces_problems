#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char ch[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>ch[i][j];
            }
        }
        int z1=0,z2=0;
        bool flag=true;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                z1=0,z2=0;
                if(ch[i][j]=='1'){
                    if(ch[i+1][j]=='1'){
                        z1=1;
                    }
                    if(ch[i][j+1]=='1'){
                        z2=1;
                    }
                    if(!(z1||z2)){
                        flag = false;
                        break;
                    }
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
}