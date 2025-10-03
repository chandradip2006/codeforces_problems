#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char ch[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>ch[i][j];
            }
        }
        bool flag =false;
        int z;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ch[j][i]=='1'){
                    flag = true;
                    z=i;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(ch[i][z]=='1'){
                count++;
            }
        }
        if(count>1){
            cout<<"SQUARE"<<endl;
        }
        else cout<<"TRIANGLE"<<endl;
        t--;
    }
}