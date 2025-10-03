#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[11] ;
        int count=0 , p;
        cin>>ch;
        while(ch[count]!='\0'){
            count++;
        }
        bool flag = false;
        if(count==1){
            int z = ch[0];
            if(z+1>122){
                cout<<ch[0]<<(char)(z-1)<<endl;
            }
            else if(z-1<97){
                cout<<ch[0]<<(char)(z+1)<<endl;
            }
            else{
                cout<<ch[0]<<(char)(z+1)<<endl;
            }
            t--;
            continue;
        }
        else{
            for(int i = 0 ; i < count-1;i++){
                if(ch[i]==ch[i+1]){
                    flag=true;
                    p=i;
                    break;
                }
            }
        }
        if(flag==true){
            for(int i=0;i<count;i++){
                if(i!=p){
                    cout<<ch[i];
                }
                else{
                    int z = ch[i];
                    if(z+1>122){
                        cout<<ch[i]<<(char)(z-1);
                    }
                    else if(z-1<97){
                        cout<<ch[i]<<(char)(z+1);
                    }
                    else{
                        cout<<ch[i]<<(char)(z+1);
                    }
                }
            }
            cout<<endl;
        }
        else{
            cout<<ch[1]<<ch[0];
            for(int i = 1 ; i < count ; i++){
                cout<<ch[i];
            }
            cout<<endl;
        }
        t--;
    }
}