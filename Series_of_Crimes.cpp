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
    int z1,z2;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ch[i][j]=='*'){
                count++;
            }
        }
        if(count==1){
            z1=i;
            break;
        }
        else count=0;
    }
    count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ch[j][i]=='*'){
                count++;
            }
        }
        if(count==1){
            z2=i;
            break;
        }
        else count=0;
    }
    cout<<z1+1<<" "<<z2+1<<endl;
}