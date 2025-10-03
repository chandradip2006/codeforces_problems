#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[6];
        cin>>ch;
        int z = 10*(ch[0]-'0')+(ch[1]-'0');
        if(z>=0&&z<12){
            if(z==0){
                cout<<"12";
                for(int i=2;i<5;i++){
                    cout<<ch[i];
                }
                cout<<" AM"<<endl;
            }
            else{
                cout<<ch<<" AM"<<endl;
            }
        }
        else if(z>=12&&z<24){
            if(z==12){
                cout<<ch<<" PM"<<endl;
            }
            else{
                int z1=z-12;
                if(z1>0&&z1<10){
                    cout<<"0"<<z1;
                    for(int i=2;i<5;i++){
                        cout<<ch[i];
                    }
                    cout<<" PM"<<endl;
                }
                else{
                    cout<<z1;
                    for(int i=2;i<5;i++){
                        cout<<ch[i];
                    }
                    cout<<" PM"<<endl;
                }
            }
        }
        t--;
    }
    return 0;
}