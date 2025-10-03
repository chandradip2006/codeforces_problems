#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char ch[n+1];
        cin>>ch;
        int x =0,y=0;
        bool flag = false;
        for(int i=0;i<n;i++){
            if(ch[i]=='U'){
                y++;
            }
            if(ch[i]=='D'){
                y--;
            }
            if(ch[i]=='R'){
                x++;
            }
            if(ch[i]=='L'){
                x--;
            }
            if(x==1&&y==1){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}