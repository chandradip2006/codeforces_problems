#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,m;
        cin>>n>>m;
        int a[m][2];
        for(int i=0;i<m;i++){
            for(int j=0;j<2;j++){
                cin>>a[i][j];
            }
        }
        if(n>m){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}