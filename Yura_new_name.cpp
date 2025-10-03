#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[101];
        cin>>ch;
        int count1=0,count=0;
        while(ch[count1]!='\0'){
            count1++;
        }
        if(count1==1){
            if(ch[0]=='_'){
                count=count+2;
            }
            else count++;
        }
        else{
            if(ch[0]=='_'||ch[count1-1]=='_'){
                if(ch[0]=='_'&&ch[count1-1]=='_'){
                    count=count+2;
                }
                else count++;
                for(int i=0;i<count1-1;i++){
                    if(ch[i]==ch[i+1]){
                        if(ch[i]=='_'){
                            count++;
                        }
                    }
                }
            }
            else{
                for(int i=0;i<count1-1;i++){
                    if(ch[i]==ch[i+1]){
                        if(ch[i]=='_'){
                            count++;
                        }
                    }
                }
            }
        }
        cout<<count<<endl;
        t--;
    }
}