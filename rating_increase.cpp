#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[9];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        int z;
        bool flag = false;
        for(int i=1;i<count;i++){
            if(ch[i]!='0'){
                z=i;
                flag = true;
                break;
            }
        }
        if(flag==false){
            cout<<"-1"<<endl;
        }
        else{
            int z1=0,z2=0;
            for(int i=0;i<z;i++){
                z1=z1*10+(ch[i]-'0');
            }
            for(int i=z;i<count;i++){
                z2=z2*10+(ch[i]-'0');
            }
            if(z1>=z2){
                cout<<"-1"<<endl;
            }
            else{
                for(int i=0;i<z;i++){
                    cout<<ch[i];
                }
                cout<<" "<<ch+z<<endl;
            }
        }
        t--;
    }
}