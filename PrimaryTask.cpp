#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[6];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        if(count<=2){
            cout<<"NO"<<endl;
        }
        else{
            if(!(ch[0]=='1'&&ch[1]=='0')){
                cout<<"NO"<<endl;
            }
            else{
                if(count==3){
                    if(ch[2]<'2'){
                        cout<<"NO"<<endl;
                    }
                    else{
                        cout<<"YES"<<endl;
                    }
                }
                else{
                    if(ch[2]=='0'){
                        cout<<"NO"<<endl;
                    }
                    else{
                        cout<<"YES"<<endl;
                    }
                }
            }
        }
        t--;
    }
}