#include<iostream>
using namespace std;
int good(char ch[],int n){
    bool flag=true;
    for(int i=0;i<n;i=i+2){
        if(ch[i]!=ch[0]){
            flag =false;
            break;
        }
    }
    if(flag==true){
        for(int i=1;i<n;i=i+2){
            if(ch[i]!=ch[1]){
                flag=false;
                break;
            }
        }
    }
    if((flag==true)&&(ch[0]!=ch[1])){
        return 1;
    }
    else return 0;
}
int main(){
    int x;
    cin>>x;
    while(x>0){
        int n,m;
        cin>>n>>m;
        char s[n+1],t[m+1];
        cin>>s;
        cin>>t;
        bool flag =true;
        if(good(s,n)==1){
            cout<<"YES"<<endl;
            x--;
            continue;
        }
        else{
            if(good(t,m)!=1){
                cout<<"NO"<<endl;
                x--;
                continue;
            }
            else{
                for(int i=0;i<n-1;i++){
                    if(s[i]==s[i+1]){
                        if(s[i]=='1'){
                            if(t[0]=='1'||t[m-1]=='1'){
                                flag=false;
                                break;
                            }
                        }
                        else{
                            if(t[0]=='0'||t[m-1]=='0'){
                                flag=false;
                                break;
                            }
                        }
                    }
                }
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        x--;
    }
}