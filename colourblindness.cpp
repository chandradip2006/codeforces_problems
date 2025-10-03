#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char ch[2][n];
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>ch[i][j];
            }
        }
        bool flag =true;
        for(int i=0;i<n;i++){
            if(ch[0][i]=='G'||ch[0][i]=='B'){
                if(!(ch[1][i]=='G'||ch[1][i]=='B')){
                    flag=false;
                    break;
                }
            }
            else{
                if(ch[1][i]!='R'){
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}