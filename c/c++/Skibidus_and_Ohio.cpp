#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char ch[101];
        cin>>ch;
        int z = strlen(ch);
        if(z==1){
            cout<<1<<endl;
        }
        else{
            bool flag = false;
            for(int i=0;i<z-1;i++){
                if(ch[i]==ch[i+1]){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cout<<1<<endl;
            }
            else cout<<z<<endl;
        }
    }
}