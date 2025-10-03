#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[3][3];
        int z1,z2;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>ch[i][j];
                if(ch[i][j]=='?'){
                    z1=i;
                    z2=j;
                }
            }
        }
        int a=0,b=0,c=0;
        for(int i=0;i<3;i++){
            if(i!=z1){
                if(ch[i][z2]=='A'){
                    a=1;
                }
                if(ch[i][z2]=='B'){
                    b=1;
                }
                if(ch[i][z2]=='C'){
                    c=1;
                }
            }
        }
        if(a==1&&b==1){
            cout<<"C"<<endl;
        }
        else if(a==1&&c==1){
            cout<<"B"<<endl;
        }
        else if(b==1&&c==1){
            cout<<"A"<<endl;
        }
        t--;
    }
}