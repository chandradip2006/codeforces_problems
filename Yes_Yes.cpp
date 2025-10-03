#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[51];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        bool flag=true;
        if(count==1){
            if(ch[0]=='Y'||ch[0]=='e'||ch[0]=='s'){
                flag=true;
            }
            else{
                flag=false;
            }
        }
        else{
            for(int i=0;i<count ;i++){
                if(ch[i]=='Y'){
                    if(i==0){
                        if(ch[i+1]!='e'){
                            flag=false;
                            break;
                        }
                    }
                    else if(i==count-1){
                        if(ch[i-1]!='s'){
                            flag=false;
                            break;
                        }
                    }
                    else{
                        if(ch[i-1]!='s'||ch[i+1]!='e'){
                            flag=false;
                            break;
                        }
                    }
                }
                else if(ch[i]=='e'){
                    if(i==0){
                        if(ch[i+1]!='s'){
                            flag=false;
                            break;
                        }
                    }
                    else if(i==count-1){
                        if(ch[i-1]!='Y'){
                            flag=false;
                            break;
                        }
                    }
                    else{
                        if(ch[i-1]!='Y'||ch[i+1]!='s'){
                            flag=false;
                            break;
                        }
                    }
                }
                else if(ch[i]=='s'){
                    if(i==0){
                        if(ch[i+1]!='Y'){
                            flag=false;
                            break;
                        }
                    }
                    else if(i==count-1){
                        if(ch[i-1]!='e'){
                            flag=false;
                            break;
                        }
                    }
                    else{
                        if(ch[i-1]!='e'||ch[i+1]!='Y'){
                            flag=false;
                            break;
                        }
                    }
                }
                else{
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