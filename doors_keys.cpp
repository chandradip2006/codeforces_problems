#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[7];
        cin>>ch;
        int z1,z2,z3,z4,z5,z6;
        for(int i=0;i<6;i++){
            if(ch[i]=='r'){
                z1=i;
            }
            else if(ch[i]=='g'){
                z2=i;
            }
            else if(ch[i]=='b'){
                z3=i;
            }
            else if(ch[i]=='R'){
                z4=i;
            }
            else if(ch[i]=='G'){
                z5=i;
            }
            else if(ch[i]=='B'){
                z6=i;
            }
        }
        if(z4>z1){
            if(z5>z2){
                if(z6>z3){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}