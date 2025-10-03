#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char ch[n][4];
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < 4 ; j++){
                cin>>ch[i][j];
            }
        }
        for(int i = n-1 ; i>=0;i--){
            for(int j = 0 ; j < 4 ; j++){
                if(ch[i][j]=='#'){
                    cout<<j+1<<" ";
                    break;
                }
            }
        }
        cout<<endl;
        t--;
    }
}